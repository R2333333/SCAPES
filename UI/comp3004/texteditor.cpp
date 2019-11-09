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

void TextEditor::on_actionSave_triggered()
{
//    fileToSave = QFileDialog::getSaveFileName(this,"open the file");
//    QFile file(fileToSave);
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
    on_actionSave_triggered();
    CompileControl *compCon = new CompileControl(fileToSave, fileToSave+".out.json");
    compCon->compile();
}

