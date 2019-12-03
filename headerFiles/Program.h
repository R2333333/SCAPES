#ifndef PROGRAM_H
#define PROGRAM_H
#include "Identifier.h"
#include <QString>
#include "Statement.h"
#include "DeclIntStmt.h"
#include "DeclArrStmt.h"
#include "ReadStmt.h"
#include "PrintStmt.h"
#include "MoveStmt.h"
#include "AddStmt.h"
#include "CompStmt.h"
#include "JMoreStmt.h"
#include "JumpStmt.h"
#include "JLessStmt.h"
#include "JEqStmt.h"
#include "EndStmt.h"
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QMessageBox>
#include <QLinkedList>

class Program{
  public:
    Program(QString);
    //~Program();
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
    QLinkedList<Statement*> statements;
    Statement *stat;
};

#endif
