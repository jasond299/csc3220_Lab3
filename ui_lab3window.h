/********************************************************************************
** Form generated from reading UI file 'lab3window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB3WINDOW_H
#define UI_LAB3WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab3Window
{
public:
    QAction *actionOpen_Address_Book;
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QMenuBar *menubar;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Lab3Window)
    {
        if (Lab3Window->objectName().isEmpty())
            Lab3Window->setObjectName(QString::fromUtf8("Lab3Window"));
        Lab3Window->resize(827, 661);
        Lab3Window->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:1 rgba(0, 255, 0, 255));"));
        actionOpen_Address_Book = new QAction(Lab3Window);
        actionOpen_Address_Book->setObjectName(QString::fromUtf8("actionOpen_Address_Book"));
        centralwidget = new QWidget(Lab3Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(380, 50, 441, 451));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->horizontalHeader()->setVisible(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 211, 41));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(610, 510, 141, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 70, 71, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 170, 61, 61));
        QFont font;
        font.setPointSize(15);
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 170, 61, 61));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(220, 170, 61, 61));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(60, 250, 61, 61));
        pushButton_6->setFont(font);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(140, 250, 61, 61));
        pushButton_7->setFont(font);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(220, 250, 61, 61));
        pushButton_8->setFont(font);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(60, 320, 61, 61));
        pushButton_9->setFont(font);
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(140, 320, 61, 61));
        pushButton_10->setFont(font);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(220, 320, 61, 61));
        pushButton_11->setFont(font);
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(140, 390, 61, 61));
        pushButton_12->setFont(font);
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(60, 390, 61, 61));
        pushButton_13->setFont(font);
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(220, 390, 61, 61));
        pushButton_14->setFont(font);
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(140, 460, 52, 52));
        pushButton_15->setStyleSheet(QString::fromUtf8(" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:25px;\n"
" border-color: red;\n"
" max-width:50px;\n"
" max-height:50px;\n"
" min-width:50px;\n"
" min-height:50px;"));
        Lab3Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Lab3Window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 827, 26));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        Lab3Window->setMenuBar(menubar);
        statusbar = new QStatusBar(Lab3Window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Lab3Window->setStatusBar(statusbar);

        menubar->addAction(menuTools->menuAction());
        menuTools->addAction(actionOpen_Address_Book);

        retranslateUi(Lab3Window);

        QMetaObject::connectSlotsByName(Lab3Window);
    } // setupUi

    void retranslateUi(QMainWindow *Lab3Window)
    {
        Lab3Window->setWindowTitle(QApplication::translate("Lab3Window", "Lab3Window", nullptr));
        actionOpen_Address_Book->setText(QApplication::translate("Lab3Window", "Open Address Book", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Lab3Window", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("Lab3Window", "X", nullptr));
        pushButton_3->setText(QApplication::translate("Lab3Window", "1", nullptr));
        pushButton_4->setText(QApplication::translate("Lab3Window", "2\n"
"abc", nullptr));
        pushButton_5->setText(QApplication::translate("Lab3Window", "3\n"
"def", nullptr));
        pushButton_6->setText(QApplication::translate("Lab3Window", "4\n"
"ghi", nullptr));
        pushButton_7->setText(QApplication::translate("Lab3Window", "5\n"
"jkl", nullptr));
        pushButton_8->setText(QApplication::translate("Lab3Window", "6\n"
"mno", nullptr));
        pushButton_9->setText(QApplication::translate("Lab3Window", "7\n"
"pqrs", nullptr));
        pushButton_10->setText(QApplication::translate("Lab3Window", "8\n"
"tuv", nullptr));
        pushButton_11->setText(QApplication::translate("Lab3Window", "9\n"
"wxyz", nullptr));
        pushButton_12->setText(QApplication::translate("Lab3Window", "0\n"
"+", nullptr));
        pushButton_13->setText(QApplication::translate("Lab3Window", "*", nullptr));
        pushButton_14->setText(QApplication::translate("Lab3Window", "#", nullptr));
        pushButton_15->setText(QString());
        menuTools->setTitle(QApplication::translate("Lab3Window", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab3Window: public Ui_Lab3Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB3WINDOW_H
