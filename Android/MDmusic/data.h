#ifndef DATA_H
#define DATA_H
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>    //sql语句
#include "music.h"
#include <QVector>
class Data
{
public:
    Data();
    bool CreatConnection();
    bool saveList();
};

#endif // DATA_H
