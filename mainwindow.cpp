#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_3_clicked()
{
    close();
}

void MainWindow::on_manageProg_clicked()
{
    manageProg = new ManageProgram(this);
    manageProg->show();
}

void MainWindow::on_pushButton_2_clicked()
{

}
