#include "manageprogram.h"
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
    delete enterFileName;
}

void ManageProgram::on_Create_clicked()
{
    EnterFileName *enterFileName = new EnterFileName(this,"create");
    enterFileName->show();
}

void ManageProgram::on_Open_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Please Choose File to Open");
    QFile file(fileName);

    if(!file.open(QFile::ReadOnly)){
        QMessageBox::warning(nullptr, "Error", "file not open");
        return;
    }
    QTextStream out(&file);
    QString buff = out.readAll();
    TextEditor *te = new TextEditor(nullptr,fileName);
    te->setBuff(buff);
    te->show();
}

void ManageProgram::on_Compile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Please Choose File to Compile");
    QFile inputFile(fileName);

    if (!inputFile.open(QFile::ReadOnly)){
        QMessageBox::warning(nullptr, "Error", "Can not Open file");
    }else{
        QString outputName = QFileDialog::getSaveFileName(this, "Please Choose Output File Name");
        QFile outputFile(outputName);
        if (!outputFile.open(QFile::ReadOnly)){
            if(outputName == nullptr){
                QMessageBox::warning(nullptr, "Error", "No output file");
                return;
            }else{
                RepositoryControl *repoCon = new RepositoryControl();
                repoCon->create(outputName.toStdString());
            }
        }
        CompileControl *comCon = new CompileControl(fileName,outputName);
        comCon->compile();
        QJsonObject outputObj = comCon->getQJson();
        QJsonDocument Doc(outputObj);
        QString outputJson(Doc.toJson(QJsonDocument::Compact));
        RepositoryControl *repoCon = new RepositoryControl();
        repoCon->save(this,outputName,outputJson);
    }
}
