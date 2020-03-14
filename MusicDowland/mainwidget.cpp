#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <downland.h>
//#incldue <>
MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    manage = new QNetworkAccessManager(this);       //分配空间
   // setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
        setFixedSize(1697,920);                     // 禁止拖动窗口大小
        connect(this,SIGNAL(beiginnext()),this,SLOT(slotNext()));
    connect(manage,SIGNAL(finished(QNetworkReply*)),this,SLOT(oneProcessFinished(QNetworkReply*)));
      //req = "http://quan.suning.com/getSysTime.do";
    set = new Downland();
    set->setWindowModality(Qt::WindowModal);
    lis = false;
    count = 0;
    standItemModel = new QStandardItemModel();
    standItemModel->setColumnCount(6);
    standItemModel->setHeaderData(0,Qt::Horizontal,QStringLiteral("歌曲"));   //设置表头内容
    standItemModel->setHeaderData(1,Qt::Horizontal,QStringLiteral("歌手"));
    standItemModel->setHeaderData(2,Qt::Horizontal,QStringLiteral("ID"));
    standItemModel->setHeaderData(3,Qt::Horizontal,QStringLiteral("播放"));
    standItemModel->setHeaderData(4,Qt::Horizontal,QStringLiteral("下载"));
    standItemModel->setHeaderData(5,Qt::Horizontal,QStringLiteral("添加"));
    ui->resultList->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格属性只读，不能编辑
    ui->resultList->setModel(standItemModel);    //挂载表格模型
    ui->resultList->setMouseTracking(true);
    connect(ui->resultList, SIGNAL(entered(QModelIndex)),this, SLOT(showToolTip(QModelIndex)));


}
void MainWidget::oneProcessFinished(QNetworkReply *reply)
{


    qDebug()<<"lin42";
   // ui->htmlview->setHtml(html);
    if("sort"==type){
         QString html = reply->readAll();
        QStringList list = html.split("\n");
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
                    qDebug()<<temp.name;
                    music_list.append(temp);
                }
            }

        }

       qDebug()<<"musiclist size"<< music_list.size();
       showResult();
       type = "";


    }else if("anaylize"==type){
         QString html = reply->readAll();
        downurl = html;
        qDebug()<<downurl;
        if("请求参数错误"!=html)
        {
             qDebug()<<"down";
            type = "downland";
            manage->get(QNetworkRequest(QUrl(downurl)));
        }else{
            QString temp = QString("%1下载失败").arg(downname);
            ui->htmlview->append(temp);
            if(lis){
                if(count+1 == down_list.size())
                {
                                QString tem = QString(QStringLiteral("选中歌曲已下载完成，部分下载失败，存储路径:%1")).arg(set->path);
                                ui->htmlview->append(tem);
                                QMessageBox::warning(this,QStringLiteral("警告"),tem);
                                down_list.clear();
                                count = 0;
                                lis = false;
                                return;

                 }
                count++;
                emit beiginnext();

            }
        }

    }else if("downland"==type){
        qDebug()<<"downland";

        QString filepath = QString("%1%2%3").arg(set->path).arg(downname).arg(set->format);
        qDebug()<<filepath;
        QFile file(filepath);
        if (file.open(QIODevice::WriteOnly))
        {
            file.write(reply->readAll());
            //count++;
            file.close();
            QString temp = QString("%1下载完成").arg(downname);
            ui->htmlview->append(temp);
            if(!lis){
                QMessageBox::warning(this,QStringLiteral("下载"),QStringLiteral("下载完成"));
            }else if(lis&&count+1 == down_list.size())
            {
                QString tem = QString(QStringLiteral("选中歌曲已下载完成，存储路径:%1")).arg(set->path);
                ui->htmlview->append(tem);
                QMessageBox::warning(this,QStringLiteral("警告"),tem);
                down_list.clear();
                count = 0;
                lis = false;

            }else{
                count++;
                emit beiginnext();

            }




        }



        type = "";
    }else{
        qDebug()<<reply->readAll();
        emit beiginnext();
    }


}

void MainWidget::showResult()
{


    for(int i=0;i<music_list.size();i++)
    {
        qDebug()<<"add";
        QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(music_list.at(i).name));
        QStandardItem *standItem2 = new QStandardItem(tr("%1").arg(music_list.at(i).songer));
        QStandardItem *standItem3 = new QStandardItem(tr("%1").arg(music_list.at(i).id));

        standItemModel->setItem(i,0,standItem1);                                //表格第i行，第0列添加一项内容
        standItemModel->item(i,0)->setTextAlignment(Qt::AlignCenter);           //设置表格内容居中
        standItemModel->setItem(i,1,standItem2);                                //表格第i行，第1列添加一项内容
        standItemModel->setItem(i,2,standItem3);
    }
       for(int i=0;i<music_list.size();i++)
    {
        QPushButton *downland_PushButton=new QPushButton;
        QPushButton *listen_PushButton=new QPushButton;
        QPushButton *add_PushButton=new QPushButton;
        connect(downland_PushButton,&QPushButton::clicked,
                [=]()
                {
                    qDebug()<<music_list.at(i).id;
                    qDebug()<<music_list.at(i).songer;
                    QString str = QString("%1_%2").arg(music_list.at(i).name).arg(music_list.at(i).songer);
                    downLand(music_list.at(i).id,str,set->k);



                }

               );
        connect(listen_PushButton,&QPushButton::clicked,
                [=]()
                {



                }

               );
        connect(add_PushButton,&QPushButton::clicked,
                [=]()
                {
                    down_list.append(music_list.at(i));
                    ui->htmlview->append(music_list.at(i).name);


                }

               );
         downland_PushButton->setText(QStringLiteral("下载"));
         listen_PushButton->setText(QStringLiteral("播放"));
         add_PushButton->setText(QStringLiteral("添加"));
         ui->resultList->setIndexWidget(standItemModel->index(i,3),listen_PushButton);    //向表格单元添加一个控件
         ui->resultList->setIndexWidget(standItemModel->index(i,4),downland_PushButton);
         ui->resultList->setIndexWidget(standItemModel->index(i,5),add_PushButton);

    }

}

bool MainWidget::downLand(QString id,QString name,int k)
{

    downname = name;
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy-MM-dd_hh:mm:ss");
    QString te = QString("[%1]开始下载：%2").arg(current_date).arg(name);
    ui->htmlview->append(te);
    qDebug()<<current_date;
    QString data;
    for(int i=9,j=0;i>=0;i--,j++)
    {
        data[j] = current_date[i];
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
    QString temp = QString("http://140.143.30.148:88/index.php?key=%1&class=kugou&ID=%2&k=%3").arg(md5).arg(id).arg(k);
    qDebug()<<temp;
    type = "anaylize";

    manage->get(QNetworkRequest(QUrl(temp)));    //请求实现
    qDebug()<<"请求";


    return true;

}
MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_sortButton_clicked()
{
    //点击搜索按钮
    if(!music_list.empty())
        music_list.clear();
    QString input = ui->inputEdit->text();
    QString req = QString("http://140.143.30.148:88/index.php?class=Searchkugou&ID=%1&k=0").arg(input);
    type = "sort";
    manage->get(QNetworkRequest(QUrl(req)));

}


void MainWidget::showToolTip(const QModelIndex &index)
{

    if (!index.isValid()) {
    qDebug() << "Invalid index";
    return;
    }
}

void MainWidget::on_setbutton_clicked()
{
    set->show();

}
void MainWidget::slotNext()
{
    if(count<down_list.size()){
        qDebug()<<"开始下一个"<<count;
    QString str=QString("%1_%2").arg(down_list.at(count).name).arg(down_list.at(count).songer);
    downLand(down_list.at(count).id,str,set->k);
    }


}
void MainWidget::on_downall_clicked()
{

    if(down_list.empty()){
        QMessageBox::warning(this,QStringLiteral("警告"),QStringLiteral("请选择要下载的歌曲"));
    }else{
        count = 0;
        lis = true;
        //slotNext();
        QString str=QString("%1_%2").arg(down_list.at(count).name).arg(down_list.at(count).songer);
        downLand(down_list.at(count).id,str,set->k);



    }
}
