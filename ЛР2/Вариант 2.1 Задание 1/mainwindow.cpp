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
    QString res;
    for (int i = 0; i < split.length(); i++)
    {
        strVec.append(split[i]);
    }
    for (int i = strVec.size() - 1; i >= 0; i--)
    {
        res = res + strVec[i] + " ";
    }
    ui -> label -> setText(res);
}

