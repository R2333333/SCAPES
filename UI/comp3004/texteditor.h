#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QMainWindow>
#include "../../headerFiles/RepositoryControl.h"
#include "../../headerFiles/CompileControl.h"

namespace Ui {
class TextEditor;
}

class TextEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit TextEditor(QWidget *parent = nullptr, QString fileName=NULL);
    ~TextEditor();

private slots:
    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionCompile_triggered();

private:
    Ui::TextEditor *ui;
    QString fileToSave;
    string buff;
};

#endif // TEXTEDITOR_H