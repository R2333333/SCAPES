#include "manageprogram.h"
#include "ui_manageprogram.h"
#include <QMessageBox>

ManageProgram::ManageProgram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageProgram)
{
    ui->setupUi(this);
    setWindowTitle("Manage Program");
}

ManageProgram::~ManageProgram()
{
    delete ui;
}

void ManageProgram::on_Create_clicked()
{
    EnterFileName *enterFileName = new EnterFileName(this,"create");
    enterFileName->show();
}

void ManageProgram::on_Open_clicked()
{
    EnterFileName *enterFileName = new EnterFileName(this,"open");
    enterFileName->show();
}

void ManageProgram::on_Compile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Please Choose File to Compile");
    QString outputName = QFileDialog::getSaveFileName(this, "Please Choose Output File Name");
    CompileControl *comCon = new CompileControl(fileName,outputName);
    comCon->compile();
}
