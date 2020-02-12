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

void Lab3Window::on_pushButton_clicked()
{
    myModel->setFilterString("8");
}

void Lab3Window::on_tableView_clicked(const QModelIndex &index)
{
    std::cout << index.row() << "," << index.column() << std::endl;
    ui->label->setText(myModel->getPhoneNumber(index.row()));
}

void Lab3Window::on_pushButton_3_clicked()
{
    ui->label->setText(ui->label->text()+"1");
    QString str = ui->label->text();
    if(str.length() == 3 || str.length() == 7){
        ui->label->setText(ui->label->text()+"-");
    }
}

void Lab3Window::on_pushButton_2_clicked()
{
    QString str = ui->label->text();
        ui->label->setText(str.left(str.length()-1));

    if(str.length() == 4 || str.length() == 8){
        ui->label->setText(str.left(str.length()-1));
    }
}
