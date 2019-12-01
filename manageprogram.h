#ifndef MANAGEPROGRAM_H
#define MANAGEPROGRAM_H

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

private:
    Ui::ManageProgram *ui;
};

#endif // MANAGEPROGRAM_H
