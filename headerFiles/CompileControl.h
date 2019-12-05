#ifndef COMPILECONTROL_H
#define COMPILECONTROL_H
#include "RepositoryControl.h"
#include "Program.h"
#include <QString>
#include <QMainWindow>

using namespace std;

class CompileControl{
  public:
    CompileControl(QString filePath, QString outPutName);
    void compile();
    QJsonObject getQJson();
    QString getOutput();
    void CreatePgm();
    void storePgm();
    void run();
    //~CompileControl();
  private:

      RepositoryControl *repository;
      Program *program;
      QString filePath;
      QString outPutName;
};
#endif
