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
#include <QMessageBox>
#include "music.h"
#include "play.h"
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

    QString md5Result(MUsic music);
    void anaylizeFire();
private:
    Ui::MainWidget *ui;
    QStandardItemModel *standItemModel;
    QNetworkAccessManager *manage;
    QVector <MUsic> result_list;
    QString request_type;
    QString result;
    Play *musicplay;
    int urlindex;
    QString timeall;
    int index_down; //下载序列
private slots:
     void updateDuration(qint64 duration);//更新播放歌曲的时间
     void updatePosition(qint64 position);//接收歌曲位置改变，那么滑块的位置也要变
     void oneProcessFinished(QNetworkReply*);
     void on_sort_clicked();
     void slotRequestUrl();
     void on_horizontalSlider_sliderMoved(int position);

     void on_menu_clicked();
     void changePlay();
     void on_play_clicked();
     void slotPlayOne();
     void showNotice();
     void slotDownland();

     void on_set_clicked();

signals:
     void nextUrl();
     void downNext();
};

#endif // MAINWIDGET_H
