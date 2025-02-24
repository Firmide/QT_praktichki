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

QList <int> lst;
QString res;

void MainWindow::on_pushButton_clicked()
{  
    if (ui -> radioButton -> isChecked())
    {
        res.clear();
        lst.clear();
        for (int i = 0; i < 5; i++)
        {
            int num = rand() % (100 - 1 + 1) + 1;
            lst.append(num);
        }
        for (int i = 0; i < lst.length(); i++)
        {
            res += QString::number(lst[i]) + " ";
        }
        ui -> label -> setText(res);
    }
    if (ui -> radioButton_2 -> isChecked())
    {
        res.clear();
        int num = rand() % (100 - 1 + 1) + 1;
        lst.append(num);
        for (int i = 0; i < lst.length(); i++)
        {
            res += QString::number(lst[i]) + " ";
        }
        ui -> label -> setText(res);
    }
    if (ui -> radioButton_3 -> isChecked())
    {
        res.clear();
        lst.removeLast();
        for (int i = 0; i < lst.length(); i++)
        {
            res += QString::number(lst[i]) + " ";
        }
        ui -> label -> setText(res);
    }
}

