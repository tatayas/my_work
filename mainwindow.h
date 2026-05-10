#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mypicture.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT



public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
   void mySignal(int);

public slots:
   void mySlot(QString str)
   {
       bool ok;
       int value = str.toInt(&ok,10);
       if(ok)
       {
           //qDebug() <<"Success!";
           emit mySignal(value);
       }

   }



private slots:
   void on_action_About_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
