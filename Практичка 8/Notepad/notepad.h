#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:

    void on_newFile_triggered();

    void on_openFile_triggered();

    void on_saveFile_triggered();

    void on_undo_triggered();

    void on_copy_triggered();

    void on_paste_triggered();

    void on_font_triggered();

    void on_alignLeft_triggered();

    void on_alignCenter_triggered();

    void on_alignRight_triggered();

    void on_gotoLine_triggered();

    void on_about_triggered();

    void on_search_triggered();

private:
    Ui::Notepad *ui;
};
#endif // NOTEPAD_H
