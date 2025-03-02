/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar_1;
    QPushButton *p1end;
    QPushButton *p2end;
    QProgressBar *progressBar_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *set120secGame;
    QPushButton *pushButton_5min;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progressBar_1 = new QProgressBar(centralwidget);
        progressBar_1->setObjectName("progressBar_1");
        progressBar_1->setGeometry(QRect(30, 30, 271, 23));
        progressBar_1->setValue(24);
        p1end = new QPushButton(centralwidget);
        p1end->setObjectName("p1end");
        p1end->setGeometry(QRect(30, 110, 121, 18));
        p2end = new QPushButton(centralwidget);
        p2end->setObjectName("p2end");
        p2end->setGeometry(QRect(30, 240, 121, 18));
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(30, 170, 271, 23));
        progressBar_2->setValue(24);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 290, 131, 18));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(190, 290, 81, 18));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 79, 101, 41));
        set120secGame = new QPushButton(centralwidget);
        set120secGame->setObjectName("set120secGame");
        set120secGame->setGeometry(QRect(270, 70, 51, 21));
        pushButton_5min = new QPushButton(centralwidget);
        pushButton_5min->setObjectName("pushButton_5min");
        pushButton_5min->setGeometry(QRect(270, 127, 51, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        progressBar_1->setFormat(QCoreApplication::translate("MainWindow", "%v", nullptr));
        p1end->setText(QCoreApplication::translate("MainWindow", "Player 1 end turn", nullptr));
        p2end->setText(QCoreApplication::translate("MainWindow", "Player 2 end turn", nullptr));
        progressBar_2->setFormat(QCoreApplication::translate("MainWindow", "%v", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Peli alkaa!", nullptr));
        set120secGame->setText(QCoreApplication::translate("MainWindow", "120sec", nullptr));
        pushButton_5min->setText(QCoreApplication::translate("MainWindow", "5min", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
