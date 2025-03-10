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
    QFile myFile ("C:/Files/f2.txt");
    if (!myFile.exists())
    {
        ui -> label -> setText("Ошибка, файл не найден");
    }
    if (!myFile.open(QIODevice::ReadOnly))
    {
        ui -> label -> setText("Ошибка, файл нельзя открыть для чтения");
    }

    QFile myFile1 ("C:/Files/g.txt");
    if (!myFile1.exists())
    {
        ui -> label -> setText("Ошибка, файл не найден");
    }
    if (!myFile1.open(QIODevice::WriteOnly))
    {
        ui -> label -> setText("Ошибка, файл нельзя открыть для записи");
    }

    QTextStream stream(&myFile);
    QString buffer = stream.readAll();

    QStringList split = buffer.split(" ");
    QList <int> lst;
    QString res = "Содержимое файла: ";

    for (int i = 0; i < split.length(); i++)
    {
        lst.append(split[i].toInt());
    }
    for (int i = 0; i < lst.length(); i++)
    {
        res += QString::number(lst[i]) + " ";
    }
    ui -> label -> setText(res);

    QList <int> maxnums;
    QString finalres;
    for (int i = 0; i < lst.length() / 5; i++)
    {
        int max = -100;
        for (int j = 0; j < 5; j++)
        {
            if (lst[j + (i * 5)] > max)
            {
                max = lst[j + (i * 5)];
            }
        }
        finalres += "Максимальное число из группы номер " + QString::number(i + 1) + ": " + QString::number(max) + "\n";
        maxnums.append(max);
    }
    if (lst.length() % 5 != 0)
    {
        int max = -100;
        for (int i = 0; i < (lst.length() - (maxnums.length() * 5)); i++)
        {
            if (lst[i + (maxnums.length() * 5)] > max)
            {
                max = lst[i + (maxnums.length() * 5)];
            }
        }
        finalres += "Максимальное число из последней неполной группы: " + QString::number(max);
    }

    QTextStream stream1(&myFile1);
    stream1 << finalres;

    ui -> label_2 -> setText("Результаты записаны в файл g.txt");

    myFile.close();
    myFile1.close();
}
