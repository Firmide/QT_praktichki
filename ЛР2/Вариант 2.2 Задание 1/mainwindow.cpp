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
    QString list = ui -> lineEdit -> text();
    QStringList split = list.split(" ");
    QVector<QString> strVec;
    QString even = "Елементы с чётными индексами: ";
    QString odd = "Елементы с нечётными индексами: ";
    for (int i = 0; i < split.length(); i++)
    {
        strVec.append(split[i]);
    }
    for (int i = 0; i < strVec.size(); i+=2)
    {
        odd = odd + strVec[i] + " ";
    }
    for (int i = 1; i < strVec.size(); i+=2)
    {
        even = even + strVec[i] + " ";
    }
    ui -> label -> setText(even);
    ui -> label_2 -> setText(odd);
}

