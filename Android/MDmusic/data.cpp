#include "data.h"

Data::Data()
{

}

bool Data::CreatConnection()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");//建库
    db.setDatabaseName("mymusic.db");//给数据库起名字
    if(!db.open())
    {
        return false;
    }
   return true;
}
bool Data::saveList()
{
    QSqlQuery query;
    query.exec("create table musiclist(id varchar(255) primary key,name varchar(255),songer varchar(255),url varchar(255));");

}
