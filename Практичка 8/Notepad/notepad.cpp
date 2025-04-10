#include "notepad.h"
#include "ui_notepad.h"

#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QFontDialog>
#include <QTextCursor>
#include <QTextBlock>
#include <QInputDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QMessageBox>

QString copiedText;

Notepad::Notepad(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Notepad)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
}

Notepad::~Notepad() {
    delete ui;
}

void Notepad::on_newFile_triggered()
{
    ui->textEdit->clear();
}


void Notepad::on_openFile_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open File", "", "HTML Files (*.html);;All Files (*)");
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Ошибка", "Невозможно открыть файл.");
        return;
    }
    QDesktopServices::openUrl(QUrl(fileName));
    file.close();
}


void Notepad::on_saveFile_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save File", "", "HTML Files (*.html);;All Files (*)");
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Ошибка", "Невозможно сохранить файл.");
        return;
    }
    QTextStream out(&file);
    out << ui->textEdit->toHtml();
    file.close();
}


void Notepad::on_undo_triggered()
{
    ui->textEdit->undo();
}


void Notepad::on_copy_triggered()
{
    copiedText = ui->textEdit->textCursor().selectedText();
}


void Notepad::on_paste_triggered()
{
    ui->textEdit->textCursor().insertHtml(copiedText);
}


void Notepad::on_font_triggered()
{
    QFont font = QFontDialog::getFont(nullptr, this);
    QTextCharFormat format;
    format.setFont(font);
    ui->textEdit->textCursor().setCharFormat(format);

}


void Notepad::on_alignLeft_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);

}


void Notepad::on_alignCenter_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignCenter);
}


void Notepad::on_alignRight_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignRight);
}


void Notepad::on_gotoLine_triggered()
{
    bool ok;
    int num = QInputDialog::getInt(this, "Перейти", "На строку:", 1, 1,
        ui->textEdit->document()->blockCount(), 1, &ok);
    if (ok)
    {
        QTextBlock block = ui->textEdit->document()->findBlockByLineNumber(num - 1);
        QTextCursor cursor(block);
        ui->textEdit->setTextCursor(cursor);
    }
}

void Notepad::on_about_triggered()
{
    QString about = "Программу сделал Николаев Денис в сотрудничестве с Брыляковым Сергеем \n"
                    "Программа собой представляет редактор текста и включает в себя следующие функции:\n"
                    "Создание нового файла, открытие файла в браузере, сохранение файла\n"
                    "Отмена последнего действия, копирование и вставка выделенного текста\n"
                    "Изменение шрифта и выравнивания выделенного текста\n"
                    "Поиск символов и переход к определённой строке\n";
    QMessageBox msgBox;
    msgBox.setText(about);
    msgBox.exec();
}


void Notepad::on_search_triggered()
{
    bool ok;
    QString text = QInputDialog::getText(this, "Поиск", "Найти:", QLineEdit::Normal, "", &ok);
    if (ok && !text.isEmpty()) {
        QTextDocument *doc = ui->textEdit->document();
        QTextCursor cursor = doc->find(text);
        if (!cursor.isNull())
        {
            ui->textEdit->setTextCursor(cursor);
        }
        else
        {
            QMessageBox::information(this, "Результат", "Текст не найден.");
        }
    }
}

