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
    QString list = ui -> textEdit -> toPlainText();
    QStringList rows = list.split("\n");
    QVector <QVector <int>> matrix;
    QVector <int> numbers;
    QString status = ui -> comboBox -> currentText();
    int length;
    int res = 0;
    int index = (ui -> lineEdit -> text()).toInt();
    for (int j = 0; j < rows.length(); j++)
    {
        QStringList lines = rows[j].split(" ");
        numbers.clear();
        for (int i = 0; i < lines.length(); i++)
        {
            int temp = lines[i].toInt();
            numbers.append(temp);

        }
        length = lines.length();
        matrix.append(numbers);
    }

    if (status == "Сумма")
    {
        for (int i = 0; i < length; i++)
        {
            res = res + matrix[index][i];
        }
    }
    else
    {
        res = 1;
        for (int i = 0; i < length; i++)
        {
            res = res * matrix[index][i];
        }
    }

    ui -> label -> setText(QString::number(res));
}

