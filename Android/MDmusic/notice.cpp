#include "notice.h"
#include "ui_notice.h"

Notice::Notice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Notice)
{
    ui->setupUi(this);
    connect(manage,SIGNAL(finished(QNetworkReply*)),this,SLOT(oneProcessFinished(QNetworkReply*)));
    manage->get(QNetworkRequest(QUrl("http://47.99.95.58/file/md/notice.html")));

}
void Notice::oneProcessFinished(QNetworkReply *reply)
{
    QString temp  =reply->readAll();
    qDebug()<<temp;
    ui->textBrowser->setHtml(temp);
    this->show();
    QMessageBox::warning(this," ",temp);
}

Notice::~Notice()
{
    delete ui;
}
