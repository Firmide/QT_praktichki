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

QList <QString> last_names;
QList <QString> numbers;
QMap <QString, QString> phone;

void MainWindow::on_pushButton_clicked()
{
    QString res = "Фамилии в телефонной книге: ";
    QString last_name = ui -> textEdit -> toPlainText();
    last_names.append(last_name);
    for (int i = 0; i < last_names.length(); i++)
    {
        res += last_names[i] + "; ";
    }
    ui -> textEdit_3 -> setText(res);
}


void MainWindow::on_pushButton_2_clicked()
{
    QString res = "Номера в телефонной книге: ";
    QString number = ui -> textEdit_2 -> toPlainText();
    numbers.append(number);
    for (int i = 0; i < numbers.length(); i++)
    {
        res += numbers[i] + "; ";
    }
    ui -> textEdit_3 -> setText(res);
}


void MainWindow::on_pushButton_3_clicked()
{
    if (last_names.length() == numbers.length())
    {
        for (int i = 0; i < last_names.length(); i++)
        {
            phone.insert(last_names[i], numbers[i]);
        }
    }
    else
    {
        ui -> textEdit_3 -> setText("Длина книг не совпадает, невозможно объединить");
    }

    QString res = "Содержимое телефонной книги:\n";
    QMap <QString, QString>::iterator it = phone.begin();
    for (;it != phone.end(); it++)
    {
        res += "Фамилия: " + it.key() + "; Номер телефона: " + it.value() + ":\n";
    }
    ui -> textEdit_3 -> setText(res);
}


void MainWindow::on_pushButton_4_clicked()
{
    last_names.clear();
    numbers.clear();
    phone.clear();
    ui -> textEdit_3 -> setText("Все книги были очищены");
}

