#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int x = (ui -> lineEdit -> text()).toInt();
    int y = (ui -> lineEdit_2 -> text()).toInt();
    if (x == y)
    {
        ui -> label -> setText(QString::fromUtf8("Теперь переменные равны ") + QString::number(x + y));
    }
    else
    {
        ui -> label -> setText(QString::fromUtf8("Теперь переменные равны ") + QString::number(0));
    }
}

