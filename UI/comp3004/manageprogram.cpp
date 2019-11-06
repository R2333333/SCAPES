#include "manageprogram.h"
#include "ui_manageprogram.h"
#include <QMessageBox>

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

void ManageProgram::on_pushButton_clicked()
{
    EnterFileName *enterFileName = new EnterFileName(this,"create");
    enterFileName->show();
    RepositoryControl *respoCon = new RepositoryControl();
    respoCon->save(enterFileName->getFileName());
}