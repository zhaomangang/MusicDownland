#ifndef MAINWIDGET_H
#define MAINWIDGET_H

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

typedef struct{
    QString name;
    QString songer;
    QString id;
    QString url_2000;
    QString url_320;
    QString url_128;

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
    void init();
    void showResult();
    void sort();
private:
    Ui::MainWidget *ui;
    QStandardItemModel *standItemModel;
    QNetworkAccessManager *manage;
    QVector <MUsic> result_list;
    QString request_type;
    QString result;
private slots:
     void oneProcessFinished(QNetworkReply*);
     void on_sort_clicked();
};

#endif // MAINWIDGET_H
