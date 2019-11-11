#include "texteditor.h"
#include "ui_texteditor.h"
#include <QtDebug>

TextEditor::TextEditor(QWidget *parent, QString fileName) :
    QMainWindow(parent),
    ui(new Ui::TextEditor)
{
    ui->setupUi(this);
    fileToSave = fileName;
}

TextEditor::~TextEditor()
{
    delete ui;
}

void TextEditor::setBuff(QString buff){
    ui->plainTextEdit->setPlainText(buff);
}

void TextEditor::on_actionSave_triggered()
{
    RepositoryControl *repoCon = new RepositoryControl();
    repoCon->save(this,fileToSave,ui->plainTextEdit->toPlainText());
}

void TextEditor::on_actionSave_As_triggered()
{
    fileToSave = QFileDialog::getSaveFileName(this,"Enter the file name you want to save");
    on_actionSave_triggered();
}

void TextEditor::on_actionCompile_triggered()
{
    //on_actionSave_triggered();
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
    CompileControl *compCon = new CompileControl(fileToSave, fileToSave+".out.json");
    compCon->compile();
    QJsonObject outputObj = compCon->getQJson();
    QJsonDocument Doc(outputObj);
    QString outputJson(Doc.toJson(QJsonDocument::Compact));
    RepositoryControl *repoCon = new RepositoryControl();
    repoCon->save(this,outputName,outputJson);
}

