/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Plus;
    QPushButton *Seven;
    QPushButton *Four;
    QPushButton *Nine;
    QPushButton *NegaPos;
    QPushButton *Eight;
    QPushButton *One;
    QPushButton *Six;
    QPushButton *Times;
    QPushButton *Two;
    QPushButton *Three;
    QPushButton *Five;
    QPushButton *Zero;
    QPushButton *Point;
    QPushButton *Clear;
    QPushButton *Divide;
    QPushButton *Minus;
    QPushButton *Equals;
    QLineEdit *Nums;
    QLineEdit *Ans;
    QPushButton *Square;
    QPushButton *Lg;
    QPushButton *Root;
    QPushButton *Cos;
    QPushButton *Backspace;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(266, 343);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 100, 211, 103));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Plus = new QPushButton(gridLayoutWidget);
        Plus->setObjectName("Plus");

        gridLayout->addWidget(Plus, 0, 3, 1, 1);

        Seven = new QPushButton(gridLayoutWidget);
        Seven->setObjectName("Seven");

        gridLayout->addWidget(Seven, 3, 0, 1, 1);

        Four = new QPushButton(gridLayoutWidget);
        Four->setObjectName("Four");

        gridLayout->addWidget(Four, 2, 0, 1, 1);

        Nine = new QPushButton(gridLayoutWidget);
        Nine->setObjectName("Nine");

        gridLayout->addWidget(Nine, 3, 2, 1, 1);

        NegaPos = new QPushButton(gridLayoutWidget);
        NegaPos->setObjectName("NegaPos");

        gridLayout->addWidget(NegaPos, 3, 3, 1, 1);

        Eight = new QPushButton(gridLayoutWidget);
        Eight->setObjectName("Eight");

        gridLayout->addWidget(Eight, 3, 1, 1, 1);

        One = new QPushButton(gridLayoutWidget);
        One->setObjectName("One");

        gridLayout->addWidget(One, 0, 0, 1, 1);

        Six = new QPushButton(gridLayoutWidget);
        Six->setObjectName("Six");

        gridLayout->addWidget(Six, 2, 2, 1, 1);

        Times = new QPushButton(gridLayoutWidget);
        Times->setObjectName("Times");

        gridLayout->addWidget(Times, 2, 3, 1, 1);

        Two = new QPushButton(gridLayoutWidget);
        Two->setObjectName("Two");

        gridLayout->addWidget(Two, 0, 1, 1, 1);

        Three = new QPushButton(gridLayoutWidget);
        Three->setObjectName("Three");

        gridLayout->addWidget(Three, 0, 2, 1, 1);

        Five = new QPushButton(gridLayoutWidget);
        Five->setObjectName("Five");

        gridLayout->addWidget(Five, 2, 1, 1, 1);

        Zero = new QPushButton(centralwidget);
        Zero->setObjectName("Zero");
        Zero->setGeometry(QRect(1, 209, 100, 30));
        Point = new QPushButton(centralwidget);
        Point->setObjectName("Point");
        Point->setGeometry(QRect(109, 209, 47, 30));
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        Clear->setGeometry(QRect(163, 209, 47, 30));
        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        Divide->setGeometry(QRect(218, 170, 47, 29));
        Minus = new QPushButton(centralwidget);
        Minus->setObjectName("Minus");
        Minus->setGeometry(QRect(218, 134, 47, 29));
        Equals = new QPushButton(centralwidget);
        Equals->setObjectName("Equals");
        Equals->setGeometry(QRect(218, 207, 47, 66));
        Nums = new QLineEdit(centralwidget);
        Nums->setObjectName("Nums");
        Nums->setGeometry(QRect(2, 0, 262, 51));
        Nums->setAcceptDrops(true);
        Nums->setReadOnly(true);
        Ans = new QLineEdit(centralwidget);
        Ans->setObjectName("Ans");
        Ans->setGeometry(QRect(2, 50, 262, 51));
        Ans->setAcceptDrops(true);
        Ans->setReadOnly(true);
        Square = new QPushButton(centralwidget);
        Square->setObjectName("Square");
        Square->setGeometry(QRect(109, 245, 47, 29));
        Lg = new QPushButton(centralwidget);
        Lg->setObjectName("Lg");
        Lg->setGeometry(QRect(55, 245, 47, 29));
        Root = new QPushButton(centralwidget);
        Root->setObjectName("Root");
        Root->setGeometry(QRect(163, 245, 47, 29));
        Cos = new QPushButton(centralwidget);
        Cos->setObjectName("Cos");
        Cos->setGeometry(QRect(1, 245, 47, 29));
        Backspace = new QPushButton(centralwidget);
        Backspace->setObjectName("Backspace");
        Backspace->setGeometry(QRect(218, 101, 47, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 266, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        NegaPos->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        One->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Times->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        Divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Square->setText(QCoreApplication::translate("MainWindow", "x^2", nullptr));
        Lg->setText(QCoreApplication::translate("MainWindow", "lg", nullptr));
        Root->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        Cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        Backspace->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
