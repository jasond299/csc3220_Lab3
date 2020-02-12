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

    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Lab3Window *ui;
    MyAddressBook *myModel;
};
#endif // LAB3WINDOW_H
