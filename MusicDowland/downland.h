#ifndef DOWNLAND_H
#define DOWNLAND_H

#include <QWidget>

namespace Ui {
class Downland;
}

class Downland : public QWidget
{
    Q_OBJECT

public:
    explicit Downland(QWidget *parent = 0);
    ~Downland();
    int k;
    QString path;
    QString format;

private slots:
    void on_SQ_clicked();
    void on_HQ_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

signals:
    void select();
private:
    Ui::Downland *ui;
};

#endif // DOWNLAND_H
