#include "manageprogram.h"
#include "ui_manageprogram.h"

ManageProgram::ManageProgram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageProgram)
{
    ui->setupUi(this);
}

ManageProgram::~ManageProgram()
{
    delete ui;
}
