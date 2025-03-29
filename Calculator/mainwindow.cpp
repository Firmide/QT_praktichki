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

QString num = "";
float num1 = 0;
float num2 = 0;
QString action = "none";
bool haveAction = false;

void MainWindow::on_One_clicked()
{
    num += "1";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Two_clicked()
{
    num += "2";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Three_clicked()
{
    num += "3";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Four_clicked()
{
    num += "4";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Five_clicked()
{
    num += "5";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Six_clicked()
{
    num += "6";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Seven_clicked()
{
    num += "7";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Eight_clicked()
{
    num += "8";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Nine_clicked()
{
    num += "9";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Zero_clicked()
{
    num += "0";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Point_clicked()
{
    num += ".";
    ui -> Nums -> setText(num);
}


void MainWindow::on_Plus_clicked()
{
    if ((action != "+") && !haveAction)
    {
        if (action != "none")
        {
            num.chop(1);
        }
        action = "+";
        haveAction = true;
        num1 = (ui -> Nums -> text()).toFloat();
        num += "+";
        ui -> Nums -> setText(num);
    }

}


void MainWindow::on_Times_clicked()
{
    if ((action != "*") && !haveAction)
    {
        if (action != "none")
        {
            num.chop(1);
        }
        action = "*";
        haveAction = true;
        num1 = (ui -> Nums -> text()).toFloat();
        num += "*";
        ui -> Nums -> setText(num);
    }
}


void MainWindow::on_Minus_clicked()
{
    if ((action != "-") && !haveAction)
    {
        if (action != "none")
        {
            num.chop(1);
        }
        action = "-";
        haveAction = true;
        num1 = (ui -> Nums -> text()).toFloat();
        num += "-";
        ui -> Nums -> setText(num);
    }
}


void MainWindow::on_Divide_clicked()
{
    if ((action != "/") && !haveAction)
    {
        if (action != "none")
        {
            num.chop(1);
        }
        action = "/";
        haveAction = true;
        num1 = (ui -> Nums -> text()).toFloat();
        num += "/";
        ui -> Nums -> setText(num);
    }
}


void MainWindow::on_Equals_clicked()
{
    if (haveAction)
    {
        num2 = num.remove(0, (QString::number(num1).length()) + 1).toFloat();
        if (action == "+")
        {
            ui -> Ans -> setText(QString::number(num1 + num2));
        }
        else if (action == "-")
        {
            ui -> Ans -> setText(QString::number(num1 - num2));
        }
        else if (action == "*")
        {
            ui -> Ans -> setText(QString::number(num1 * num2));
        }
        else
        {
            ui -> Ans -> setText(QString::number(num1 / num2));
        }
        num.clear();
        action = "none";
        haveAction = false;
    }
}


void MainWindow::on_Clear_clicked()
{
    num.clear();
    action = "none";
    haveAction = false;
    ui -> Nums -> setText(num);
    ui -> Ans -> setText("");
}


void MainWindow::on_Cos_clicked()
{
    if (!haveAction)
    {
        num1 = (ui -> Nums -> text()).toFloat();
        ui -> Ans -> setText(QString::number(cos(num1)));
    }
}


void MainWindow::on_Lg_clicked()
{
    if (!haveAction)
    {
        num1 = (ui -> Nums -> text()).toFloat();
        ui -> Ans -> setText(QString::number(log10(num1)));
    }
}


void MainWindow::on_Square_clicked()
{
    if (!haveAction)
    {
        num1 = (ui -> Nums -> text()).toFloat();
        ui -> Ans -> setText(QString::number(pow(num1, 2)));
    }
}


void MainWindow::on_Root_clicked()
{
    if (!haveAction)
    {
        num1 = (ui -> Nums -> text()).toFloat();
        ui -> Ans -> setText(QString::number(sqrt(num1)));
    }
}


void MainWindow::on_NegaPos_clicked()
{
    if (!haveAction)
    {
        if (!num.startsWith("-"))
        {
            num = "-" + num;
            ui -> Nums -> setText(num);
        }
        else
        {
            num.remove(0, 1);
            ui -> Nums -> setText(num);
        }
    }
}


void MainWindow::on_Backspace_clicked()
{
    if (num.endsWith("+") || num.endsWith("-") || num.endsWith("*") || num.endsWith("/"))
    {
        num.chop(1);
        action = "none";
        haveAction = false;
        ui -> Nums -> setText(num);
    }
    else
    {
        num.chop(1);
    }
    ui -> Nums -> setText(num);
}
