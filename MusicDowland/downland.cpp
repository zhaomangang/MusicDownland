#include "downland.h"
#include "ui_downland.h"
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
Downland::Downland(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Downland)
{
    ui->setupUi(this);
    k = 2000;
    format = ".flac";
    path = "D:\\code\\MusicDownland\\";
    ui->lineEdit_2->setText(".flac,2000");
    QFile file("config.txt");
    if (file.open(QIODevice::ReadOnly))
    {
        path = file.readAll();
    }
    file.close();
}

Downland::~Downland()
{
    delete ui;
}

void Downland::on_SQ_clicked()
{
    k = 2000;
    format = ".flac";
    QMessageBox::warning(this,QStringLiteral("成功"),QStringLiteral("成功选择.flac,2000码率"));
    ui->lineEdit_2->setText(".flac,2000");
}

void Downland::on_HQ_clicked()
{
    k = 320;
    format = ".mp3";
    QMessageBox::warning(this,QStringLiteral("成功"),QStringLiteral("成功选择.mp3,320码率"));
    ui->lineEdit_2->setText(".mp3,320");
}

void Downland::on_pushButton_3_clicked()
{
    k = 128;
    format = ".mp3";
    QMessageBox::warning(this,QStringLiteral("成功"),QStringLiteral("成功选择.mp3,128码率"));
    ui->lineEdit_2->setText(".mp3,128");
}

void Downland::on_pushButton_clicked()
{
        QFileDialog* fileDialog = new QFileDialog(this);
     fileDialog->setWindowTitle("Choose Directory");
     //fd->setDirectory(buf);
     fileDialog->setFileMode( QFileDialog::DirectoryOnly );
     if ( fileDialog->exec() == QDialog::Accepted )
     {
         path = fileDialog->selectedFiles().last();
         //srcDir.setPath(fileName.at(0));
         ui->lineEdit->setText(path);
         path.append('/');
         qDebug()<<path;
         QFile file("config.txt");
         if (file.open(QIODevice::WriteOnly))
         {
             file.write(path.toStdString().c_str());
         }
         file.close();
         QMessageBox::warning(this,QStringLiteral("成功"),QStringLiteral("路径配置成功"));
     }
     else
     {
         return;
     }


}
