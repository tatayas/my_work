/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "mypicture.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Exit;
    QAction *action_About;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSlider_third_hlayout;
    QLabel *label_third_hlayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_first_hlayout;
    QLabel *label_first_hlayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineedit_second_hlayout;
    QLabel *laber_second_hlayout;
    QPushButton *pushButton;
    MyPicture *my_picture;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Information;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(876, 483);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Images_lab4/icons8-qt-framework-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico_buttons/Images_lab4/icons8-\320\272\321\200\320\265\321\201\321\202-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon1);
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Images_lab4/icon2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_About->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSlider_third_hlayout = new QSlider(centralwidget);
        horizontalSlider_third_hlayout->setObjectName(QString::fromUtf8("horizontalSlider_third_hlayout"));
        horizontalSlider_third_hlayout->setMaximum(99);
        horizontalSlider_third_hlayout->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_third_hlayout);

        label_third_hlayout = new QLabel(centralwidget);
        label_third_hlayout->setObjectName(QString::fromUtf8("label_third_hlayout"));

        horizontalLayout_3->addWidget(label_third_hlayout);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox_first_hlayout = new QSpinBox(centralwidget);
        spinBox_first_hlayout->setObjectName(QString::fromUtf8("spinBox_first_hlayout"));
        spinBox_first_hlayout->setMaximum(99);

        horizontalLayout->addWidget(spinBox_first_hlayout);

        label_first_hlayout = new QLabel(centralwidget);
        label_first_hlayout->setObjectName(QString::fromUtf8("label_first_hlayout"));
        label_first_hlayout->setEnabled(true);

        horizontalLayout->addWidget(label_first_hlayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        lineedit_second_hlayout = new QLineEdit(centralwidget);
        lineedit_second_hlayout->setObjectName(QString::fromUtf8("lineedit_second_hlayout"));
        lineedit_second_hlayout->setMaxLength(2);

        horizontalLayout_2->addWidget(lineedit_second_hlayout);

        laber_second_hlayout = new QLabel(centralwidget);
        laber_second_hlayout->setObjectName(QString::fromUtf8("laber_second_hlayout"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(laber_second_hlayout->sizePolicy().hasHeightForWidth());
        laber_second_hlayout->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(laber_second_hlayout);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setIcon(icon1);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        my_picture = new MyPicture(centralwidget);
        my_picture->setObjectName(QString::fromUtf8("my_picture"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(my_picture->sizePolicy().hasHeightForWidth());
        my_picture->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(my_picture, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 876, 26));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Information = new QMenu(menubar);
        menu_Information->setObjectName(QString::fromUtf8("menu_Information"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
#if QT_CONFIG(shortcut)
        label_third_hlayout->setBuddy(horizontalSlider_third_hlayout);
        label_first_hlayout->setBuddy(spinBox_first_hlayout);
        laber_second_hlayout->setBuddy(lineedit_second_hlayout);
#endif // QT_CONFIG(shortcut)

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Information->menuAction());
        menu_File->addAction(action_Exit);
        menu_Information->addAction(action_About);
        toolBar->addAction(action_Exit);
        toolBar->addAction(action_About);

        retranslateUi(MainWindow);
        QObject::connect(spinBox_first_hlayout, SIGNAL(valueChanged(int)), horizontalSlider_third_hlayout, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_third_hlayout, SIGNAL(valueChanged(int)), spinBox_first_hlayout, SLOT(setValue(int)));
        QObject::connect(spinBox_first_hlayout, SIGNAL(valueChanged(QString)), lineedit_second_hlayout, SLOT(setText(QString)));
        QObject::connect(lineedit_second_hlayout, SIGNAL(textChanged(QString)), MainWindow, SLOT(mySlot(QString)));
        QObject::connect(MainWindow, SIGNAL(mySignal(int)), spinBox_first_hlayout, SLOT(setValue(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(spinBox_first_hlayout, SIGNAL(valueChanged(int)), my_picture, SLOT(setScale(int)));
        QObject::connect(action_Exit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(my_picture, SIGNAL(changeRazmer(QString)), statusbar, SLOT(showMessage(QString)));
        QObject::connect(pushButton, SIGNAL(clicked()), action_Exit, SLOT(trigger()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Disigner", nullptr));
        action_Exit->setText(QCoreApplication::translate("MainWindow", "&Exit", nullptr));
#if QT_CONFIG(shortcut)
        action_Exit->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        action_About->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        label_third_hlayout->setText(QCoreApplication::translate("MainWindow", "&SliderBuddy", nullptr));
        label_first_hlayout->setText(QCoreApplication::translate("MainWindow", "&SpinBuddy", nullptr));
        laber_second_hlayout->setText(QCoreApplication::translate("MainWindow", "&EditBuddy", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(statustip)
        my_picture->setStatusTip(QCoreApplication::translate("MainWindow", "\320\235\320\270\321\207\320\265\320\263\320\276 \320\275\320\265 \320\264\320\265\320\273\320\260\321\216...", nullptr));
#endif // QT_CONFIG(statustip)
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_Information->setTitle(QCoreApplication::translate("MainWindow", "&Information", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
