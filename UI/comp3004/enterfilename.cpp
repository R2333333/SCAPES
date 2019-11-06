#include "enterfilename.h"
#include "ui_enterfilename.h"


EnterFileName::EnterFileName(QWidget *parent, QString type) :
    QDialog(parent),
    ui(new Ui::EnterFileName)
{
    ui->setupUi(this);
    this->type = type;
}

EnterFileName::~EnterFileName()
{
    delete ui;
}


void EnterFileName::on_buttonBox_accepted()
{
    this->nameEntered = (ui->lineEdit->text());

}
