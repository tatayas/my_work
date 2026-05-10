#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    QIntValidator *validator_label = new QIntValidator(0,99,ui->lineedit_second_hlayout);
    //panel_ledit->setValidator(validator_label);
    ui->lineedit_second_hlayout->setValidator(validator_label);
    //ui->my_picture->scale

    //QString message_text = "Height = " + QString::number(ui->my_picture->getscale()) + "Weight = " + QString::number(ui->my_picture->getscale()) ;
    //ui->statusbar->showMessage(message_text);
   // update();
    //connect()


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_About_triggered()
{
    QMessageBox mess_box;
    mess_box.about(this,"About Lab4", "Yasevich wish you Happy New Year 2026!");


}
