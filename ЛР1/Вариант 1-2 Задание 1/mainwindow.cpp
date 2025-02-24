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
    int min = 0;
    int res = 0;
    if ((x < y) && (x < z))
    {
        res = y + z;
        min = x;
    }
    else if (y < z)
    {
        res = x + z;
        min = y;
    }
    else
    {
        res = x + y;
        min = z;
    }
    ui -> label -> setText(QString::fromUtf8("Наименьшее число: ") + QString::number(min) + QString::fromUtf8(", сумма двух других равна ") + QString::number(res));
}

