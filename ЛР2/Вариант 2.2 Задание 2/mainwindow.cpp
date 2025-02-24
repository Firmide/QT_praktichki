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
    int length;
    int odd = 0;
    int even = 0;
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

    for (int i = 0; i < matrix.size(); i+=2)
    {
        for (int j = 0; j < length; j++)
        {
            odd = odd + matrix[i][j];
        }
    }

    for (int i = 1; i < matrix.size(); i+=2)
    {
        for (int j = 0; j < length; j++)
        {
            even = even + matrix[i][j];
        }
    }

    ui -> label -> setText("Сумма нечётных столбцов списка равна " + QString::number(odd));
    ui -> label_2 -> setText("Сумма чётных столбцов списка равна " + QString::number(even));
}

