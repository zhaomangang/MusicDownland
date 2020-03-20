#ifndef NOTICE_H
#define NOTICE_H

#include <QWidget>
#include <QStandardItemModel>
#include <QPushButton>
#include <QNetworkAccessManager>    //加载网络请求头文件
#include <QNetworkReply>
#include <QNetworkRequest>      //加载发送请求头文件
#include <QDebug>
#include <QFile>
#include<QVector>
#include <QMediaPlayer>
#include <QMessageBox>
namespace Ui {
class Notice;
}

class Notice : public QWidget
{
    Q_OBJECT

public:
    explicit Notice(QWidget *parent = 0);
    ~Notice();

private:
    Ui::Notice *ui;
    QNetworkAccessManager *manage;
private slots:
     void oneProcessFinished(QNetworkReply*);
};

#endif // NOTICE_H
