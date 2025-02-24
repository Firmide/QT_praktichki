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
    int z = (ui -> lineEdit_3 -> text()).toInt();
    QString res = "";
    if ((x > y) && (x > z))
    {
        res = QString::number(x) + " ";
        if (z > y)
        {
            res = res + QString::number(z) + " " + QString::number(y);
        }
        else
        {
            res = res + QString::number(y) + " " + QString::number(z);
        }
    }
    else if (y > z)
    {
        res = QString::number(y) + " ";
        if (z > x)
        {
            res = res + QString::number(z) + " " + QString::number(x);
        }
        else
        {
            res = res + QString::number(x) + " " + QString::number(z);
        }
    }
    else
    {
        res = QString::number(z) + " ";
        if (x > y)
        {
            res = res + QString::number(x) + " " + QString::number(y);
        }
        else
        {
            res = res + QString::number(y) + " " + QString::number(x);
        }
    }
    ui -> label -> setText(res);
}

