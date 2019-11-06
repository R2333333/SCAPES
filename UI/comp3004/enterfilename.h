#ifndef ENTERFILENAME_H
#define ENTERFILENAME_H

#include <string>
#include <QDialog>
#include "../../headerFiles/RepositoryControl.h"

namespace Ui {
class EnterFileName;
}

class EnterFileName : public QDialog
{
    Q_OBJECT

public:
    explicit EnterFileName(QWidget *parent = nullptr, QString q = "untitled");
    std::string getFileName(){return nameEntered.toStdString();}
    ~EnterFileName();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EnterFileName *ui;
    QString nameEntered;
    QString type;
};

#endif // ENTERFILENAME_H
