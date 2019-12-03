#ifndef MANAGEPROGRAM_H
#define MANAGEPROGRAM_H

#include "ui_manageprogram.h"
#include "enterfilename.h"
#include <QDialog>
#include <QJsonDocument>

namespace Ui {
class ManageProgram;
}

class ManageProgram : public QDialog
{
    Q_OBJECT

public:
    explicit ManageProgram(QWidget *parent = nullptr);
    //~ManageProgram();

private slots:

    void on_Create_clicked();

    void on_Open_clicked();

    void on_Compile_clicked();

private:
    Ui::ManageProgram *ui;
    EnterFileName *enterFileName;
};

#endif // MANAGEPROGRAM_H
