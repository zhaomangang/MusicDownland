#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    manage = new QNetworkAccessManager(this);       //分配空间
    connect(manage,SIGNAL(finished(QNetworkReply*)),this,SLOT(oneProcessFinished(QNetworkReply*)));
    request_type = "NOTICE";
    manage->get(QNetworkRequest(QUrl("http://47.99.95.58/mdfire/notice.txt")));

    musicplay = new Play();
    musicplay->hide();
    urlindex = 0;
    ui->progressBar->hide();

    connect(musicplay->player,&QMediaPlayer::positionChanged,this,&MainWidget::updatePosition);
    connect(musicplay->player,&QMediaPlayer::durationChanged,this,&MainWidget::updateDuration);
    connect(musicplay,&Play::playChanged,this,&MainWidget::changePlay);
    connect(musicplay,&Play::playOne,this,&MainWidget::slotPlayOne);
    connect(musicplay,&Play::begin,this,&MainWidget::slotPlayOne);
    connect(musicplay,&Play::downland,this,&MainWidget::slotDownland);
    connect(this,&MainWidget::downNext,this,&MainWidget::slotDownland);
    init();


}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::init()
{
    standItemModel = new QStandardItemModel();
    standItemModel->setColumnCount(4);
    ui->resultList->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格属性只读，不能编辑
    ui->resultList->setModel(standItemModel);    //挂载表格模型
    ui->resultList->setMouseTracking(true);
    connect(ui->resultList, SIGNAL(entered(QModelIndex)),this, SLOT(showToolTip(QModelIndex)));

   // manage->get(QNetworkRequest(QUrl("https://www.kugou.com/yy/rank/home/1-6666.html?from=rank")));
}

void MainWidget::showResult()
{

    for(int i=0;i<result_list.size();i++)
    {
        qDebug()<<"add"<<i;
        QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(result_list.at(i).name));
        QStandardItem *standItem2 = new QStandardItem(tr("%1").arg(result_list.at(i).songer));
        standItemModel->setItem(i,0,standItem1);                                //表格第i行，第0列添加一项内容
        standItemModel->setItem(i,1,standItem2);                                //表格第i行，第1列添加一项内容
    }
    for(int i=0;i<result_list.size();i++)
    {
        qDebug()<<"lin56";
        QPushButton *listen_PushButton=new QPushButton;
        QPushButton *add_PushButton=new QPushButton;
        connect(listen_PushButton,&QPushButton::clicked,
                [=]()
                {

                musicplay->Transmit(result_list.at(i));


                    ui->name->setText(result_list.at(i).name);
                    ui->songer->setText(result_list.at(i).songer);
                    musicplay->updateNowUi(result_list.at(i).name,result_list.at(i).songer);
                    musicplay->player->play();
                    musicplay->updatePlay(false);
                    ui->play->setIcon(QIcon(QPixmap(":/image/play.jpg")));
                }

               );
        connect(add_PushButton,&QPushButton::clicked,
                [=]()
                {
                    musicplay->addMusic(result_list.at(i));


                }

               );
         listen_PushButton->setText(QStringLiteral("播放"));
         add_PushButton->setText(QStringLiteral("添加"));
         ui->resultList->setIndexWidget(standItemModel->index(i,2),listen_PushButton);    //向表格单元添加一个控件
         ui->resultList->setIndexWidget(standItemModel->index(i,3),add_PushButton);

    }

}
void MainWidget::sort()
{
   result_list.clear();
   if(!result.contains(";",Qt::CaseSensitive)){
       QMessageBox::warning(this,QStringLiteral("提示"),QStringLiteral("未搜索到内容，请检查输入是否合法"));
        return;
   }
   QStringList list = result.split("\n");
   for(int i=0;i<list.size();i++)
   {
       QString mu = list.at(i);
       QStringList m = mu.split(";");
       qDebug()<<m.size();
       MUsic temp;
       for(int i=0;i<m.size();i++)
       {
           if(i==0)
               temp.name = m.at(0);
           if(i==1)
               temp.songer = m.at(1);
           if(i==2)
           {
               temp.id = m.at(2);
               result_list.append(temp);
           }
       }
   }
   ui->progressBar->show();
   ui->progressBar->setMaximum(result_list.size());

   request_type = "GETURL";
   urlindex = 0;
   ui->progressBar->setValue(urlindex);
   manage->get(QNetworkRequest(QUrl(md5Result(result_list.at(urlindex)))));
   connect(this,SIGNAL(nextUrl()),this,SLOT(slotRequestUrl()));





}
QString MainWidget::md5Result(MUsic music)
{

    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy-MM-dd");
    QString data;
    for(int k=9,j=0;k>=0;k--,j++)
    {
        data[j] = current_date[k];
    }
    QString pwd=QString("%1vgmusic").arg(data);
    QString md5;
    QByteArray ba,bb;
    QCryptographicHash md(QCryptographicHash::Md5);
    ba.append(pwd);
    md.addData(ba);
    bb = md.result();
    md5.append(bb.toHex());
    qDebug()<<md5;
    QString temp = QString("http://140.143.30.148:88/index.php?key=%1&class=kugou&ID=%2&k=%3").arg(md5).arg(music.id).arg(320);
    return temp;
}
void MainWidget::slotRequestUrl()
{
    qDebug()<<"slot";
    if(request_type!="GETURL")
    {
        qDebug()<<"error";
        return;
    }
    qDebug()<<urlindex<<request_type;
    result_list[urlindex].url_320 = result;
    urlindex++;

    if(urlindex<result_list.size()){
        ui->progressBar->setValue(urlindex);
        qDebug()<<"next"<<urlindex;
        manage->get(QNetworkRequest(QUrl(md5Result(result_list.at(urlindex)))));
    }else{
        request_type = "";
        qDebug()<<"else"<<urlindex;
        delete standItemModel;
        qDebug()<<"line123";
        init();
        qDebug()<<"line124";
        showResult();
        ui->progressBar->hide();

    }
}
void MainWidget::showNotice()
{
    //QString temp = result
    QString notice = result;
    if(notice.contains("时间",Qt::CaseSensitive))
        QMessageBox::warning(this,QStringLiteral("公告"),notice);
    request_type="";
}
void MainWidget::anaylizeFire()
{
    //QString re = result;
    QStringList list = result.split(";");
    for(int i=1;i<list.size();i++)
    {
        MUsic temp;
        temp.id = i;
        temp.name = list.at(i);
        temp.url_320 = QString("http://47.99.95.58/mdfire/mp3/%1.mp3").arg(list.at(i));
        temp.songer = "每日推荐";
        result_list.append(temp);
    }
    showResult();

}
void MainWidget::oneProcessFinished(QNetworkReply *reply)
{
    if("DOWNLAND"!=request_type)
    {
        result = reply->readAll();

    }

    if("SORT" == request_type){
        sort();
    }else if("GETURL"==request_type){
        emit nextUrl();

    }else if("NOTICE"==request_type){
        request_type = "FIRELIST";
        //result = reply->readAll();
        qDebug()<<"notice line 234"<<result;
        QStringList list = result.split(";");
        qDebug()<<"line 230"<<list.at(1);
        if(result.contains("时间",Qt::CaseSensitive))
                QMessageBox::warning(this,QStringLiteral("公告"),list.at(1));

        //请求排行榜
       manage->get(QNetworkRequest(QUrl("http://47.99.95.58/mdfire/list.txt")));



    }else if("DOWNLAND"==request_type){
        QString filepath = QString("%1%2_%3.mp3").arg(musicplay->savePath).arg(musicplay->down_list.at(index_down).name).arg(musicplay->down_list.at(index_down).songer);
        qDebug()<<filepath;
        QFile file(filepath);
        if (file.open(QIODevice::WriteOnly))
        {
            file.write(reply->readAll());
            index_down++;
            file.close();
        }
        downNext();
    }else if("FIRELIST"==request_type){
        anaylizeFire();
    }
    else{
        emit downNext();
        qDebug()<<"result"<<result;
    }

}

void MainWidget::slotDownland()
{
    //下载
    if(request_type!="DOWNLAND")
    {
        //play触发
        request_type = "DOWNLAND";
        index_down = 0;
    }else{
        //下一个歌


    }
    musicplay->progressSetValue(index_down);
    if(index_down<musicplay->down_list.size())
    {
        manage->get(QNetworkRequest(QUrl(musicplay->down_list.at(index_down).url_320)));
    }else{
        //下载完成
        musicplay->down_list.clear();
        //QMessageBox::warning(this,QStringLiteral("提示"),QStringLiteral("列表歌曲已下载完成"));
    }




}

//1.


//2

void MainWidget::updateDuration(qint64 duration)//更新播放歌曲的时间
{
    ui->horizontalSlider->setRange(0,duration);//根据播放时长来设置滑块的范围
    ui->horizontalSlider->setEnabled(duration>0);
    ui->horizontalSlider->setPageStep(duration/10);//以及每一步的步数
    qint64 seconds=duration/1000;
    const qint64 minutes=seconds/60;
    seconds-=minutes*60;
    timeall = QStringLiteral("%1:%2").arg(minutes, 2, 10, QLatin1Char('0')).arg(seconds, 2, 10, QLatin1Char('0'));

}


void MainWidget::updatePosition(qint64 position)//接收歌曲位置改变，那么滑块的位置也要变
{
    ui->horizontalSlider->setValue(position);//设置滑块位置
    qint64 seconds=position/1000;
    const qint64 minutes=seconds/60;
    seconds-=minutes*60;
    ui->time->setText(QStringLiteral("%1:%2/%3").arg(minutes, 2, 10, QLatin1Char('0')).arg(seconds, 2, 10, QLatin1Char('0')).arg(timeall));

}



void MainWidget::on_sort_clicked()
{
    //点击搜索按钮
    if(!result_list.empty())
        result_list.clear();
    QString input = ui->inputEdit->text();
    QString req = QString("http://140.143.30.148:88/index.php?class=Searchkugou&ID=%1&k=0").arg(input);
    request_type = "SORT";
    manage->get(QNetworkRequest(QUrl(req)));
}

void MainWidget::changePlay()
{
    if(QMediaPlayer::PlayingState==musicplay->player->state())
    {
        musicplay->player->pause();
        ui->play->setIcon(QIcon(QPixmap(":/image/pause.jpg")));
        musicplay->updatePlay(true);
    }else if(QMediaPlayer::PausedState==musicplay->player->state()){
        musicplay->player->play();
        ui->play->setIcon(QIcon(QPixmap(":/image/play.jpg")));
        musicplay->updatePlay(false);
    }
}
void MainWidget::slotPlayOne()
{
    qDebug()<<"slot play one"<<musicplay->playNow.name;
    ui->play->setIcon(QIcon(QPixmap(":/image/play.jpg")));
    ui->name->setText(musicplay->playNow.name);
    ui->songer->setText(musicplay->playNow.songer);
}
void MainWidget::on_horizontalSlider_sliderMoved(int position)
{
    quint64 pos = position;
    musicplay->player->setPosition(pos);
}

void MainWidget::on_menu_clicked()
{
    musicplay->show();
}

void MainWidget::on_play_clicked()
{
    if(QMediaPlayer::PlayingState==musicplay->player->state())
    {
        musicplay->player->pause();
        musicplay->updatePlay(true);
        ui->play->setIcon(QIcon(QPixmap(":/image/pause.jpg")));

    }else if(QMediaPlayer::PausedState==musicplay->player->state()){
        musicplay->player->play();
        musicplay->updatePlay(false);
        ui->play->setIcon(QIcon(QPixmap(":/image/play.jpg")));
    }

}

void MainWidget::on_set_clicked()
{
    QMessageBox::warning(this,"",QStringLiteral("待完善"));
}
