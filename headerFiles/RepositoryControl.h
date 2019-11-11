#ifndef REPOSITORYCONTROL_H
#define REPOSITORYCONTROL_H

#include <fstream>
#include <string>
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

using namespace std;

class RepositoryControl{
  public:
    void save(QWidget*,QString,QString);
    void create(string);

};
#endif
