#include "mainwidget.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    QSize size = a.desktop( )->screenGeometry( ).size( );
    w.resize(size);
    w.show();

    return a.exec();
}
