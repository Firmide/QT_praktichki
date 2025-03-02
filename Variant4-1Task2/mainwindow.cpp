#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QQueue>

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
    QQueue<int> que;
    QQueue<int> que1;
    QString res = "Очередь: ";
    QString res1 = "Модуль разности соседних чисел: ";
    for (int i = 0; i < 8; i++)
    {
        int num = rand() % (100 + 1 - 1) - 1;
        que.enqueue(num);
    }

    for (int i = 0; i < que.length(); i++)
    {
        res += QString::number(que[i]) + " ";
    }

    for (int i = 1; i < que.length() - 1; i++)
    {
        que1.enqueue(abs(que[i - 1] - que[i + 1]));
    }

    for (int i = 0; i < que1.length(); i++)
    {
        res1 += QString::number(que1[i]) + " ";
    }
    ui -> label -> setText(res);
    ui -> label_2 -> setText(res1);
}

