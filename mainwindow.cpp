#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}




MainWindow::~MainWindow()
{
    if (timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    gameTime = 120;
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    ui->progressBar_1->setRange(0,gameTime);
    ui->progressBar_2->setRange(0,gameTime);
    ui->progressBar_1->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);



    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainWindow::updateProgressBar);
    timer->setInterval(1000);
    timer->start();


}

void MainWindow::on_pushButton_4_clicked()
{
    if (timer && timer->isActive()) {
        timer->stop();
    }

    p1Time = gameTime;
    p2Time = gameTime;
    ui->progressBar_1->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);
    currentPlayer = 1;

}


void MainWindow::updateProgressBar()
{

    if (currentPlayer == 1){

    p1Time = p1Time-1;
    ui->progressBar_1->setValue(p1Time);

    if (p1Time <= 0){
        qDebug() << "Pelaaja 1 hävisi";


    }
    }else {
        p2Time = p2Time - 1;
        ui->progressBar_2->setValue(p2Time);

        if (p2Time <= 0) {
            qDebug() << "Pelaaja 2 hävisi";

        }
    }



}



void MainWindow::on_p1end_clicked()
{
    currentPlayer = 2;

}


void MainWindow::on_p2end_clicked()
{
    currentPlayer = 1;

}

void MainWindow::set5minGame()
{
    gameTime = 300;
}

void MainWindow::set120secGame()
{
    gameTime = 120;
}






