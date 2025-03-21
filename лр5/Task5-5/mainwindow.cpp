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

bool isPrime(int num)
{
    int c = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            c += 1;
        }
    }
    if (c == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString res1 = "Множество чисел, кратное 3: ";
    QString res2 = "Множество простых чисел: ";
    QString res3 = "Множество составных чисел: ";
    int lim = ui -> spinBox -> value();

    QList <int> lst;
    while (lst.length() < lim)
    {
        int num = rand() % (100 - 1 + 1) + 1;
        if (num % 3 == 0)
        {
            lst.append(num);

        }
    }
    for (int i = 0; i < lst.length(); i++)
    {

        res1 += QString::number(lst[i]) + " ";
    }

    lst.clear();
    while (lst.length() < lim)
    {
        int num = rand() % (100 - 1 + 1) + 1;
        if (isPrime(num))
        {
            lst.append(num);

        }
    }
    for (int i = 0; i < lst.length(); i++)
    {

        res2 += QString::number(lst[i]) + " ";
    }

    lst.clear();
    while (lst.length() < lim)
    {
        int num = rand() % (100 - 1 + 1) + 1;
        if (!isPrime(num))
        {
            lst.append(num);

        }
    }
    for (int i = 0; i < lst.length(); i++)
    {

        res3 += QString::number(lst[i]) + " ";
    }

    ui -> textEdit -> setText(res1);
    ui -> textEdit_2 -> setText(res2);
    ui -> textEdit_3 -> setText(res3);
}

