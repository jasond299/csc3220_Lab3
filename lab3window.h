#ifndef LAB3WINDOW_H
#define LAB3WINDOW_H

#include <QMainWindow>
#include "myaddressbook.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Lab3Window; }
QT_END_NAMESPACE

class Lab3Window : public QMainWindow
{
    Q_OBJECT

public:
    Lab3Window(QWidget *parent = nullptr);
    ~Lab3Window();

private slots:
    void on_actionOpen_Address_Book_triggered();

private:
    Ui::Lab3Window *ui;
    MyAddressBook *myModel;
};
#endif // LAB3WINDOW_H
