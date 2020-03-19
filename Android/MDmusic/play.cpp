#include "play.h"
#include "ui_play.h"
#include <QMessageBox>
#include "data.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>    //sql语句
#include "music.h"
#include <QVector>
Play::Play(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Play)
{

    ui->setupUi(this);
    player = new QMediaPlayer;
    mode = "XUNHUAN";
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
   // player->setMedia(QUrl("http://fs.android2.kugou.com/9cd5746207ad63bfe09a01b38dcb31fa/5e6dc72c/G014/M06/0D/11/roYBAFUMeoeAbmcpAKDH4HkxDoU299.mp3"));
    player->setVolume(30);
    playindex= 0;
    connect(this->player,&QMediaPlayer::positionChanged,this,&Play::updatePosition);
    connect(this->player,&QMediaPlayer::durationChanged,this,&Play::updateDuration);
    connect(this,SIGNAL(playend()),this,SLOT(slotNext()));
    connect(this->player,&QMediaPlayer::stateChanged,this,&Play::slotNext);
    standItemModel = new QStandardItemModel();
    standItemModel->setColumnCount(4);
    ui->musicList->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格属性只读，不能编辑
    ui->musicList->setModel(standItemModel);    //挂载表格模型
    ui->musicList->setMouseTracking(true);
    connect(ui->musicList, SIGNAL(entered(QModelIndex)),this, SLOT(showToolTip(QModelIndex)));
    connect(this, SIGNAL(removeOne()),this, SLOT(freshViewList()));
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");//建库
    db.setDatabaseName("mymusic.db");//给数据库起名字
    if(!db.open())
    {

    }else{

    }
    QSqlQuery query;

        if(query.exec("create table musiclist(id varchar(255) primary key,name varchar(255),songer varchar(255),url varchar(255));"))
        {
            qDebug()<<"创建成功";

        }else {
            qDebug()<<"创建失败";
        }
        //query.exec("insert into musiclist(id, name, songer,url) values('sad','na','','');");



    init();


}

Play::~Play()
{
    delete ui;
}
void Play::freshViewList()
{
    delete standItemModel;
    standItemModel = new QStandardItemModel();
    standItemModel->setColumnCount(4);
    ui->musicList->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格属性只读，不能编辑
    ui->musicList->setModel(standItemModel);    //挂载表格模型
    ui->musicList->setMouseTracking(true);
    connect(ui->musicList, SIGNAL(entered(QModelIndex)),this, SLOT(showToolTip(QModelIndex)));

   //QMessageBox::warning(this,QStringLiteral("提示"),QStringLiteral("移除成功"));
    updateViewList();

}

void Play::init(){
    QSqlQuery query;
    query.exec("select * from musiclist");
    while(query.next()) //一行一行遍历
        {
            //取出当前行内容
            qDebug()<< query.value("name").toString();
//                    << query.value("amount").toInt()
//                    << query.value("price").toDouble()
//                    << query.value("wight").toInt()
//                    << query.value("explain").toString();
            MUsic temp;
            temp.id = query.value("id").toString();
            temp.name = query.value("name").toString();
            temp.url_320 = query.value("url").toString();
            temp.songer = query.value("songer").toString();
            music_list.append(temp);
        }
    if(!music_list.empty()){

        ui->play->setIcon(QIcon(QPixmap(":/image/play.jpg")));
        playNow = music_list.first();

        playindex = 0;
        if(music_list.first().url_2000!=""){
            player->setMedia(QUrl(music_list.first().url_2000));
        }else if(music_list.first().url_320!=""){
            player->setMedia(QUrl(music_list.first().url_320));
        }else if(music_list.first().url_128!=""){
            player->setMedia(QUrl(music_list.first().url_128));
        }else{

        }

        player->play();
        emit playOne();
        this->updateNowUi(music_list.first().name,music_list.first().songer);

    }
    updateViewList();
}
void Play::updateViewList()
{

    for(int i=0;i<music_list.size();i++)
    {
        qDebug()<<"add";
        QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(music_list.at(i).name));
        QStandardItem *standItem2 = new QStandardItem(tr("%1").arg(music_list.at(i).songer));
        standItemModel->setItem(i,0,standItem1);                                //表格第i行，第0列添加一项内容
        standItemModel->setItem(i,1,standItem2);                                //表格第i行，第1列添加一项内容
    }
    for(int i=0;i<music_list.size();i++)
    {
        QPushButton *listen_PushButton=new QPushButton;
        QPushButton *remove_PushButton=new QPushButton;
        connect(listen_PushButton,&QPushButton::clicked,
                [=]()
                {

                qDebug()<<"else";
                player->stop();
                playNow = music_list.at(i);
                player->setMedia(QUrl(music_list.at(i).url_320));
                player->play();
                ui->name->setText(music_list.at(i).name);
                ui->songer->setText(music_list.at(i).songer);
                ui->play->setIcon(QIcon(QPixmap(":/image/play.jpg")));
                emit playOne();


                }

               );
        connect(remove_PushButton,&QPushButton::clicked,
                [=]()
                {

                    music_list.remove(i);
                    qDebug()<<"删除";
                    //ui->musicList->
                    emit removeOne();
                    //freshViewList();



                }

               );
         listen_PushButton->setText(QStringLiteral("播放"));
         remove_PushButton->setText(QStringLiteral("remove"));
         ui->musicList->setIndexWidget(standItemModel->index(i,2),listen_PushButton);    //向表格单元添加一个控件
         ui->musicList->setIndexWidget(standItemModel->index(i,3),remove_PushButton);

    }
}
void Play::slotNext()
{
    if(player->state()!=QMediaPlayer::StoppedState){
        return;
    }
    if("XUNHUAN"==mode){
        playindex++;

        player->stop();
        qDebug()<<"next"<<playindex;
        if(playindex<music_list.size())
        {

            if(music_list.at(playindex).url_2000!=""){
                player->setMedia(QUrl(music_list.at(playindex).url_2000));
            }else if(music_list.at(playindex).url_320!=""){
                player->setMedia(QUrl(music_list.at(playindex).url_320));
            }else if(music_list.at(playindex).url_128!=""){
                player->setMedia(QUrl(music_list.at(playindex).url_128));
            }else{

            }
            playNow = music_list.at(playindex);
            emit playOne();

            player->play();
            ui->name->setText(music_list.at(playindex).name);
            ui->songer->setText(music_list.at(playindex).songer);

        }else{
            playindex=  0;

            if(music_list.at(playindex).url_2000!=""){
                player->setMedia(QUrl(music_list.at(playindex).url_2000));
            }else if(music_list.at(playindex).url_320!=""){
                player->setMedia(QUrl(music_list.at(playindex).url_320));
            }else if(music_list.at(playindex).url_128!=""){
                player->setMedia(QUrl(music_list.at(playindex).url_128));
            }else{

            }
            playNow = music_list.at(playindex);
            emit playOne();
            player->play();
            ui->name->setText(music_list.at(playindex).name);
            ui->songer->setText(music_list.at(playindex).songer);

        }

    }else if("DANQU"==mode){
        if(music_list.at(playindex).url_2000!=""){
            player->setMedia(QUrl(music_list.at(playindex).url_2000));
        }else if(music_list.at(playindex).url_320!=""){
            player->setMedia(QUrl(music_list.at(playindex).url_320));
        }else if(music_list.at(playindex).url_128!=""){
            player->setMedia(QUrl(music_list.at(playindex).url_128));
        }else{

        }
        playNow = music_list.at(playindex);
        emit playOne();

        player->play();
        ui->name->setText(music_list.at(playindex).name);
        ui->songer->setText(music_list.at(playindex).songer);

    }




}
void Play::addMusic(MUsic music)
{
    if(music_list.contains(music))
    {

    }else{
        music_list.append(music);
    }

    updateViewList();
}
void Play::updateDuration(qint64 duration)//更新播放歌曲的时间
{
    duratime = duration;
    ui->horizontalSlider->setRange(0,duration);//根据播放时长来设置滑块的范围
    ui->horizontalSlider->setEnabled(duration>0);
    ui->horizontalSlider->setPageStep(duration/10);//以及每一步的步数
    qint64 seconds=duration/1000;
    const qint64 minutes=seconds/60;
    seconds-=minutes*60;
    timeall = QStringLiteral("%1:%2").arg(minutes, 2, 10, QLatin1Char('0')).arg(seconds, 2, 10, QLatin1Char('0'));

}


void Play::updatePosition(qint64 position)//接收歌曲位置改变，那么滑块的位置也要变
{
    ui->horizontalSlider->setValue(position);//设置滑块位置
    qint64 seconds=position/1000;
    const qint64 minutes=seconds/60;
    seconds-=minutes*60;
    ui->time->setText(QStringLiteral("%1:%2/%3").arg(minutes, 2, 10, QLatin1Char('0')).arg(seconds, 2, 10, QLatin1Char('0')).arg(timeall));
    if(duratime<=position){
        qDebug()<<"小于";
        //emit playend();
    }
}


void Play::Transmit(MUsic music)
{
    //duratime = -1; //防止next出现问题
    player->stop();
    if(music_list.contains(music))
    {


    }else{
        music_list.append(music);

    }
    playNow = music;
    playindex = music_list.indexOf(music);
    if(music.url_2000!=""){
        player->setMedia(QUrl(music.url_2000));
    }else if(music.url_320!=""){
        player->setMedia(QUrl(music.url_320));
    }else if(music.url_128!=""){
        player->setMedia(QUrl(music.url_128));
    }else{

    }
    player->play();
    updateViewList();



}
void Play::updateNowUi(QString name, QString songer)
{
    ui->name->setText(name);
    ui->songer->setText(songer);
}

void Play::on_horizontalSlider_sliderMoved(int position)
{
    quint64 pos = position;
    this->player->setPosition(pos);
}

void Play::on_play_clicked()
{
    emit playChanged();
}
void Play::updatePlay(bool who)
{
    if(who){
        ui->play->setIcon(QIcon(QPixmap(":/image/pause.jpg")));
    }else{
        ui->play->setIcon(QIcon(QPixmap(":/image/play.jpg")));
    }

}

void Play::on_pushButton_4_clicked()
{
    player->setVolume(player->volume()+10);
}

void Play::on_pushButton_3_clicked()
{
    player->setVolume(player->volume()-10);
}

void Play::on_pushButton_clicked()
{
    if("XUNHUAN"==mode){
        mode = "DANQU";
        ui->pushButton->setIcon(QIcon(QPixmap(":/image/danqu.png")));
    }else if("DANQU"==mode){
        mode = "XUNHUAN";
        ui->pushButton->setIcon(QIcon(QPixmap(":/image/xunhuan.png")));
    }

}

void Play::on_pushButton_7_clicked()
{
    QSqlQuery query;
    bool sta;
    for(int i=0;i<music_list.size();i++)
    {
        //id varchar(255) primary key,name varchar(255),songer varchar(255),url varchar(255)
        QString sql = QString("insert into musiclist(id, name, songer,url) values('%1','%2','%3','%4');")
                .arg(music_list.at(i).id).arg(music_list.at(i).name)
                .arg(music_list.at(i).songer).arg(music_list.at(i).url_320);
        sta = query.exec(sql);
    }
    if(sta){
        QMessageBox::warning(this,QStringLiteral("提示"),QStringLiteral("列表保存成功，下次打开程序将自动加载"));
    }

}
