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

QList <int> lst1;
QList <int> lst2;
QList <int> temp;

void MainWindow::on_pushButton_clicked()
{
    QString res1 = "Список 1: ";
    QString res2 = "Список 2: ";
    if (ui -> radioButton -> isChecked())
    {
        lst1.clear();
        lst2.clear();
        for (int i = 0; i < 5; i++)
        {
            int num = rand() % (100 - 1 + 1) + 1;
            lst1.append(num);
        }

        for (int i = 0; i < lst1.length(); i++)
        {
            res1 += QString::number(lst1[i]) + " ";
        }

        for (int i = 0; i < 5; i++)
        {
            int num = rand() % (100 - 1 + 1) + 1;
            lst2.append(num);
        }

        for (int i = 0; i < lst2.length(); i++)
        {
            res2 += QString::number(lst2[i]) + " ";
        }
        ui -> label -> setText(res1);
        ui -> label_2 -> setText(res2);
    }
    if (ui -> radioButton_2 -> isChecked())
    {
        temp.clear();
        for (int i = 0; i < lst1.length(); i++)
        {
            temp.append(lst1[i]);
        }

        lst1.clear();
        for (int i = 0; i < lst2.length(); i++)
        {
            lst1.append(lst2[i]);
        }

        for (int i = 0; i < lst1.length(); i++)
        {
            res1 += QString::number(lst1[i]) + " ";
        }

        lst2.clear();
        for (int i = 0; i < temp.length(); i++)
        {
            lst2.append(temp[i]);
        }

        for (int i = 0; i < lst2.length(); i++)
        {
            res2 += QString::number(lst2[i]) + " ";
        }

        ui -> label -> setText(res1);
        ui -> label_2 -> setText(res2);
    }
}

