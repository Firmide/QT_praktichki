#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStack>

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

QStack<int> stack;

void MainWindow::on_pushButton_clicked()
{
    stack.clear();
    QString res = "Стек: ";
    for (int i = 0; i < 10; i++)
    {
        int num = rand() % (20 + 10 + 1) - 10;
        stack.push(num);
    }
    for (int i = 0; i < stack.length(); i++)
    {
        res += QString::number(stack[i]) + " ";
    }
    ui -> label -> setText(res);


    int res1 = 0;
    for (int i = 0; i < stack.length(); i++)
    {
        res1 += stack[i];
    }
    ui -> label_2 -> setText("Сумма стека равна: " + QString::number(res1));

}

