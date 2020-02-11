#include "lab3window.h"
#include "ui_lab3window.h"
#include <iostream>
#include <QFileDialog>

Lab3Window::Lab3Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab3Window),
      myModel(new MyAddressBook(this))
{
    ui->setupUi(this);
    ui->tableView->setModel(myModel);
}

Lab3Window::~Lab3Window()
{
    delete ui;
}


void Lab3Window::on_actionOpen_Address_Book_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,
                                                    tr("Open Address Book"), "" ,
                                                    tr("Address Book (*.csv;;All Files  (*)"));


    std::cout << filename.toStdString() << std::endl;
    myModel->openFile(filename);
}
