#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    cout<<"package downland success"<<endl;
    //cout<<"开始安装新包,请等待..."<<endl;
    system("taskkill /f /t /im MusicDowland.exe");
    system("del MDMusic.exe");
    system("rename temp.exe MDMusic.exe");
    system("start MDMusic.exe");
    cout<<"update success";
    return 0;
}