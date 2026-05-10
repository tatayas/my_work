#include "mypicture.h"
#include <QPainter>
#include <QPixmap>
#include <QDebug>

MyPicture::MyPicture(QWidget *parent) : QWidget(parent)
{
    pixmap.load(":/ico_buttons/Images_lab4/WomenAndDog.jpg");
    scale = 1;
}


void MyPicture::paintEvent(QPaintEvent *event)
{

    //QSize widgetSize = size();
    QSize widgetSize(this->width()*scale/100, this->height()*scale/100);
    QPainter painter_screen(this);

    QPixmap scaledPixmap = pixmap.scaled(widgetSize,Qt::KeepAspectRatio);
    QPoint point(0,0);
    painter_screen.drawPixmap(point,scaledPixmap);
    qDebug() <<"Here =  ";
    QString message_text = "Height = " + QString::number(getscale()) + " Weight = " + QString::number(getscale()) ;
    qDebug() <<"mess = " <<message_text;
    emit changeRazmer(message_text);
    update();


}


void MyPicture::resizeEvent(QResizeEvent *event)
{
//    qDebug() <<"Here =  ";
//    QString message_text = QString::number(getscale());
//    qDebug() <<"mess = " <<message_text;
//    emit changeRazmer(message_text);

}
