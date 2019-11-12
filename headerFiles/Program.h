#ifndef PROGRAM_H
#define PROGRAM_H
#include "Identifier.h"
#include <QString>
#include "Statement.h"
#include "DeclIntStmt.h"
#include "ReadStmt.h"
#include "PrintStmt.h"
#include "CompStmt.h"
#include "JMoreStmt.h"
#include "JumpStmt.h"
#include "EndStmt.h"
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QMessageBox>

class Program{
  public:
    Program(QString);
    ~Program();
    void compile();
    void print();
    void setFileName(QString);
    QString getFileName();
    int getComparisonFlag();
    QJsonObject getQjsonobj();

  private:
    QJsonObject programObj;
    QString fileName;
    int comparisonFlag;
    Identifier **identifier;
    Statement **statement;
    Statement *stat;
};

#endif
