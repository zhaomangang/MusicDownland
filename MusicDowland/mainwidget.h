#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <QPushButton>
#include <QNetworkAccessManager>    //加载网络请求头文件
#include <QNetworkReply>
#include <QNetworkRequest>      //加载发送请求头文件
#include <downland.h>
#include <QFile>
#include<QVector>
typedef struct{
    QString name;
    QString songer;
    QString id;
    QString downurl;
}MUsic;
namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();
    void showResult();
    bool downLand(QString id,QString name,int k);
private:
    Ui::MainWidget *ui;
    QStandardItemModel *standItemModel;
    QNetworkAccessManager *manage;      //定义
    QString type;
    QVector <MUsic> music_list;
    QVector <MUsic> down_list;
    Downland *set;
    QString downurl;
    QString downname;
    bool lis;
    int count;
private slots:
     void oneProcessFinished(QNetworkReply*);
     void on_sortButton_clicked();
     void showToolTip(const QModelIndex &index);

     void on_setbutton_clicked();
     void on_downall_clicked();
     void slotNext();
signals:
     void beiginnext();
};

#endif // MAINWIDGET_H
