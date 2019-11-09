#ifndef MANAGEPROGRAM_H
#define MANAGEPROGRAM_H

#include "ui_manageprogram.h"
#include "enterfilename.h"
#include <QDialog>

namespace Ui {
class ManageProgram;
}

class ManageProgram : public QDialog
{
    Q_OBJECT

public:
    explicit ManageProgram(QWidget *parent = nullptr);
    ~ManageProgram();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ManageProgram *ui;
    EnterFileName *enterFileName;
};

#endif // MANAGEPROGRAM_H
