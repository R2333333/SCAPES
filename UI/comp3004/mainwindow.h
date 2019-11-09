#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "manageprogram.h"
#include "ui_mainwindow.h"

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

    void on_SetPreference_clicked();

    void on_manageProg_clicked();

    void on_Quit_clicked();

private:
    Ui::MainWindow *ui;
    ManageProgram *manageProg;
};

#endif // MAINWINDOW_H
