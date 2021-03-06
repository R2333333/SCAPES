#include "enterfilename.h"
#include "ui_enterfilename.h"
#include <iostream>

EnterFileName::EnterFileName(QWidget *parent, QString type) :
    QDialog(parent),
    ui(new Ui::EnterFileName)
{
    ui->setupUi(this);
    this->type = type;
    setWindowTitle("Enter File Name");
}

EnterFileName::~EnterFileName()
{
    delete ui;
}


void EnterFileName::on_buttonBox_accepted()
{
    this->nameEntered = (ui->lineEdit->text());
    RepositoryControl *repo = new RepositoryControl();

    if (this->type.compare("create") == 0) {
        repo->create(nameEntered.toStdString());
        TextEditor *te = new TextEditor(nullptr,this->nameEntered);
        te->show();
    }
}
