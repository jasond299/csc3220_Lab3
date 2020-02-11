#ifndef MYADDRESSBOOK_H
#define MYADDRESSBOOK_H

#include <QAbstractTableModel>
#include <vector>

class MyAddressBook: public QAbstractTableModel
{
public:
    MyAddressBook(QObject *parent);

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

    void openFile(QString filepath);
    QString getPhoneNumber(int index);

    void setFilterString(QString fStr);

private:
    std::vector<QString> firstNames;
    std::vector<QString> lastNames;
    std::vector<QString> phoneNumbers;
    std::vector<int> filteredIndex;
};

#endif // MYADDRESSBOOK_H
