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
QStack<int> stack1;

void MainWindow::on_pushButton_clicked()
{
    stack.clear();
    stack1.clear();
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

    for (int i = 0; i < stack.length(); i++)
    {
        if (stack[i] > 0)
        {
            stack1.push(1);
        }
        else if (stack[i] < 0)
        {
            stack1.push(-1);
        }
        else
        {
            stack1.push(0);
        }

    }

    QString res1 = "Стек с изменёнными значениями: ";
    for (int i = 0; i < stack1.length(); i++)
    {
        res1 += QString::number(stack1[i]) + " ";
    }
    ui -> label_2 -> setText(res1);

}
