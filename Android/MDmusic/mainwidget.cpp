#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    manage = new QNetworkAccessManager(this);       //分配空间
    connect(manage,SIGNAL(finished(QNetworkReply*)),this,SLOT(oneProcessFinished(QNetworkReply*)));
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
    standItemModel->setHeaderData(0,Qt::Horizontal,QStringLiteral("歌曲"));   //设置表头内容
    standItemModel->setHeaderData(1,Qt::Horizontal,QStringLiteral("歌手"));
    standItemModel->setHeaderData(2,Qt::Horizontal,QStringLiteral("播放"));
    standItemModel->setHeaderData(3,Qt::Horizontal,QStringLiteral("添加"));
    ui->resultList->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格属性只读，不能编辑
    ui->resultList->setModel(standItemModel);    //挂载表格模型
    ui->resultList->setMouseTracking(true);
    connect(ui->resultList, SIGNAL(entered(QModelIndex)),this, SLOT(showToolTip(QModelIndex)));

    manage->get(QNetworkRequest(QUrl("https://www.kugou.com/yy/rank/home/1-6666.html?from=rank")));
}

void MainWidget::showResult()
{


    for(int i=0;i<result_list.size();i++)
    {
        qDebug()<<"add";
        QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(result_list.at(i).name));
        QStandardItem *standItem2 = new QStandardItem(tr("%1").arg(result_list.at(i).songer));
        standItemModel->setItem(i,0,standItem1);                                //表格第i行，第0列添加一项内容
        standItemModel->setItem(i,1,standItem2);                                //表格第i行，第1列添加一项内容
    }
    for(int i=0;i<result_list.size();i++)
    {
        QPushButton *downland_PushButton=new QPushButton;
        QPushButton *listen_PushButton=new QPushButton;
        QPushButton *add_PushButton=new QPushButton;
        connect(listen_PushButton,&QPushButton::clicked,
                [=]()
                {



                }

               );
        connect(add_PushButton,&QPushButton::clicked,
                [=]()
                {


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
               qDebug()<<temp.name;
               result_list.append(temp);
           }
       }
   }

  showResult();
  request_type = "";
}

void MainWidget::oneProcessFinished(QNetworkReply *reply)
{
    result = reply->readAll();
    if("sort" == request_type)
    {
        sort();


    }

}

void MainWidget::on_sort_clicked()
{
    //点击搜索按钮
    if(!result_list.empty())
        result_list.clear();
    QString input = ui->inputEdit->text();
    QString req = QString("http://140.143.30.148:88/index.php?class=Searchkugou&ID=%1&k=0").arg(input);
    request_type = "sort";
    manage->get(QNetworkRequest(QUrl(req)));
}
