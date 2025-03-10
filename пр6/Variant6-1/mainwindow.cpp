#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>

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
    QFile myFile ("C:/Users/f1.txt");
    if (!myFile.exists())
    {
        ui -> label -> setText("Ошибка, файл не найден");
    }
    if (!myFile.open(QIODevice::ReadOnly))
    {
        ui -> label -> setText("Ошибка, файл нельзя открыть для чтения");
    }

    QTextStream stream(&myFile);
    QString buffer = stream.readAll();

    QStringList split = buffer.split(" ");
    QList <int> lst;
    QString res = "Содержимое файла: ";
    QString res1 = "Наибольший компонент: ";
    QString res2 = "Наименьший компонент с чётным номером: ";
    QString res3 = "Наибольший модуль компонента с нечётным номером: ";
    QString res4 = "Разность первого и последнего компонента файла: ";

    for (int i = 0; i < split.length(); i++)
    {
        lst.append(split[i].toInt());
    }
    for (int i = 0; i < lst.length(); i++)
    {
        res += QString::number(lst[i]) + " ";
    }
    ui -> label -> setText(res);

    int max = -100;
    for (int i = 0; i < lst.length(); i++)
    {
        if (lst[i] > max)
        {
            max = lst[i];
        }
    }
    ui -> label_2 -> setText(res1 += QString::number(max));

    int min_even = 100;
    for (int i = 1; i < lst.length(); i+=2)
    {
        if (lst[i] < min_even)
        {
            min_even = lst[i];
        }
    }
    ui -> label_3 -> setText(res2 += QString::number(min_even));

    int max_odd = 0;
    for (int i = 0; i < lst.length(); i+=2)
    {
        if (abs(lst[i]) > abs(max_odd))
        {
            max_odd = lst[i];
        }
    }
    ui -> label_4 -> setText(res3 += QString::number(max_odd));

    ui -> label_5 -> setText(res4 += QString::number(lst[0] - lst[lst.length() - 1]));

    myFile.close();
}
