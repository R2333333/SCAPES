#include "texteditor.h"
#include "ui_texteditor.h"

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
    RepositoryControl *repoControl = new RepositoryControl();
    buff = ui->plainTextEdit->toPlainText().toStdString();
    repoControl->save(fileToSave.toStdString(), &(this->buff));
}
