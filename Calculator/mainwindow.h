#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_One_clicked();

    void on_Two_clicked();

    void on_Three_clicked();

    void on_Four_clicked();

    void on_Five_clicked();

    void on_Six_clicked();

    void on_Seven_clicked();

    void on_Eight_clicked();

    void on_Nine_clicked();

    void on_Zero_clicked();

    void on_Point_clicked();

    void on_Plus_clicked();

    void on_Times_clicked();

    void on_Minus_clicked();

    void on_Divide_clicked();

    void on_Equals_clicked();

    void on_Clear_clicked();

    void on_Cos_clicked();

    void on_Lg_clicked();

    void on_Square_clicked();

    void on_Root_clicked();

    void on_NegaPos_clicked();

    void on_Backspace_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
