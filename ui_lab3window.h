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
    QMenuBar *menubar;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Lab3Window)
    {
        if (Lab3Window->objectName().isEmpty())
            Lab3Window->setObjectName(QString::fromUtf8("Lab3Window"));
        Lab3Window->resize(800, 600);
        actionOpen_Address_Book = new QAction(Lab3Window);
        actionOpen_Address_Book->setObjectName(QString::fromUtf8("actionOpen_Address_Book"));
        centralwidget = new QWidget(Lab3Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(410, 30, 371, 471));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->horizontalHeader()->setVisible(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 56, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 170, 141, 61));
        Lab3Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Lab3Window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        label->setText(QApplication::translate("Lab3Window", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("Lab3Window", "PushButton", nullptr));
        menuTools->setTitle(QApplication::translate("Lab3Window", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab3Window: public Ui_Lab3Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB3WINDOW_H
