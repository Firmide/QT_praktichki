/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *newFile;
    QAction *openFile;
    QAction *saveFile;
    QAction *undo;
    QAction *copy;
    QAction *paste;
    QAction *font;
    QAction *alignLeft;
    QAction *alignCenter;
    QAction *alignRight;
    QAction *search;
    QAction *gotoLine;
    QAction *about;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menufgd;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName("Notepad");
        Notepad->resize(790, 609);
        newFile = new QAction(Notepad);
        newFile->setObjectName("newFile");
        openFile = new QAction(Notepad);
        openFile->setObjectName("openFile");
        saveFile = new QAction(Notepad);
        saveFile->setObjectName("saveFile");
        undo = new QAction(Notepad);
        undo->setObjectName("undo");
        copy = new QAction(Notepad);
        copy->setObjectName("copy");
        paste = new QAction(Notepad);
        paste->setObjectName("paste");
        font = new QAction(Notepad);
        font->setObjectName("font");
        alignLeft = new QAction(Notepad);
        alignLeft->setObjectName("alignLeft");
        alignCenter = new QAction(Notepad);
        alignCenter->setObjectName("alignCenter");
        alignRight = new QAction(Notepad);
        alignRight->setObjectName("alignRight");
        search = new QAction(Notepad);
        search->setObjectName("search");
        gotoLine = new QAction(Notepad);
        gotoLine->setObjectName("gotoLine");
        about = new QAction(Notepad);
        about->setObjectName("about");
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 0, 771, 541));
        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 790, 26));
        menufgd = new QMenu(menubar);
        menufgd->setObjectName("menufgd");
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menu_2);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName("menu_4");
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName("menu_5");
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName("statusbar");
        Notepad->setStatusBar(statusbar);

        menubar->addAction(menufgd->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menufgd->addAction(newFile);
        menufgd->addAction(openFile);
        menufgd->addAction(saveFile);
        menu->addAction(undo);
        menu->addAction(copy);
        menu->addAction(paste);
        menu_2->addAction(font);
        menu_2->addAction(menu_3->menuAction());
        menu_3->addAction(alignLeft);
        menu_3->addAction(alignCenter);
        menu_3->addAction(alignRight);
        menu_4->addAction(search);
        menu_4->addAction(gotoLine);
        menu_5->addAction(about);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        newFile->setText(QCoreApplication::translate("Notepad", "\320\235\320\276\320\262\321\213\320\271", nullptr));
        openFile->setText(QCoreApplication::translate("Notepad", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        saveFile->setText(QCoreApplication::translate("Notepad", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
        undo->setText(QCoreApplication::translate("Notepad", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        copy->setText(QCoreApplication::translate("Notepad", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        paste->setText(QCoreApplication::translate("Notepad", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        font->setText(QCoreApplication::translate("Notepad", "\320\250\321\200\320\270\321\204\321\202", nullptr));
        alignLeft->setText(QCoreApplication::translate("Notepad", "\320\241\320\273\320\265\320\262\320\260", nullptr));
        alignCenter->setText(QCoreApplication::translate("Notepad", "\320\237\320\276 \321\206\320\265\320\275\321\202\321\200\321\203", nullptr));
        alignRight->setText(QCoreApplication::translate("Notepad", "\320\241\320\277\321\200\320\260\320\262\320\260", nullptr));
        search->setText(QCoreApplication::translate("Notepad", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        gotoLine->setText(QCoreApplication::translate("Notepad", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270 \320\272 \321\201\321\202\321\200\320\276\320\272\320\265", nullptr));
        about->setText(QCoreApplication::translate("Notepad", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        menufgd->setTitle(QCoreApplication::translate("Notepad", "\320\244\320\260\320\271\320\273", nullptr));
        menu->setTitle(QCoreApplication::translate("Notepad", "\320\237\321\200\320\260\320\262\320\272\320\260", nullptr));
        menu_2->setTitle(QCoreApplication::translate("Notepad", "\320\222\320\270\320\264", nullptr));
        menu_3->setTitle(QCoreApplication::translate("Notepad", "\320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265", nullptr));
        menu_4->setTitle(QCoreApplication::translate("Notepad", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        menu_5->setTitle(QCoreApplication::translate("Notepad", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
