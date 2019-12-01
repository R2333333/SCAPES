#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "manageprogram.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_3_clicked();

    void on_manageProg_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    ManageProgram *manageProg;
};

#endif // MAINWINDOW_H
