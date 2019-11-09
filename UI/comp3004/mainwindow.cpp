#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("SCAPES");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SetPreference_clicked()
{

}

void MainWindow::on_manageProg_clicked()
{
    manageProg = new ManageProgram(this);
    manageProg->show();
}

void MainWindow::on_Quit_clicked()
{
    close();
}
