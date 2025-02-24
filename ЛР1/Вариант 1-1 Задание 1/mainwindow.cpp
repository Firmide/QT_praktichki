#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <locale>

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


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}


void MainWindow::on_pushButton_clicked()
{
   QString part_result;
   QString result;
   QString first = ui->lineEdit->text();
   bool ok;
   int firstNum = first.toInt(&ok);
   if (!ok) {
       //failed
   }
   QStringList split = first.split("");
   if (split[1] == "-") {
       part_result = QString::fromUtf8("Отрицательное ") + part_result;
       switch (split.size())
       {
           case 4: result = part_result + QString::fromUtf8("однозначное число");
           break;
           case 5: result = part_result + QString::fromUtf8("двузначное число");
           break;
           case 6: result = part_result + QString::fromUtf8("трёхзначное число");
           break;
           default: result = QString::fromUtf8("Ошибка");
           break;
       }
   }
   else
   {
        part_result = QString::fromUtf8("Положительное ") + part_result;
        switch (split.size())
        {
            case 3: result = part_result + QString::fromUtf8("однозначное число");
            break;
            case 4: result = part_result + QString::fromUtf8("двузначное число");
            break;
            case 5: result = part_result + QString::fromUtf8("трёхзначное число");
            break;
            default: result = QString::fromUtf8("Ошибка");
            break;
        }
   }
   if (split[1] == "0") {
       result = QString::fromUtf8("Нулевое число");
   }
   ui->label->setText(result);
}

