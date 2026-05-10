#ifndef MYPICTURE_H
#define MYPICTURE_H

#include <QWidget>
#include <QPixmap>
#include <QDebug>

class MyPicture : public QWidget
{
    Q_OBJECT
public:
    explicit MyPicture(QWidget *parent = nullptr);
    double getscale()
    {
        return scale;
    }


private:
    QPixmap pixmap;
    double scale;

//signals:
//   void myScale(int);

public slots:
    void setScale(int sig_from_form_int)
    {

        qDebug() <<"Scale change!";
        qDebug() <<scale;
        scale = sig_from_form_int;
        qDebug() <<scale;
        //emit myScale(scale);


    }


signals:    
    // QWidget interface
    void changeRazmer(QString);
protected:
    virtual void paintEvent(QPaintEvent *event);

    // QWidget interface
protected:
    virtual void resizeEvent(QResizeEvent *event);
};

#endif // MYPICTURE_H
