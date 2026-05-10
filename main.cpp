#include "mainwindow.h"
#include<QTranslator>
#include <QApplication>
#include <QLibraryInfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator; 		//создаем переводчик
    translator.load("lab4_designer_ru_RU.qm"); 	//имя файла  перевода
              //".");			//директория - текущая
    QApplication ::installTranslator(&translator);
    //qApp->installTranslator(&translator);
    MainWindow w;
    w.show();
    return a.exec();
}
