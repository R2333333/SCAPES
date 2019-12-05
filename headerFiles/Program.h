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
#include <QJsonDocument>
#include <QMap>

class Program{
  public:
    Program(QString);
    //~Program();
    void compile();
    void run();
    void print();
    void setFileName(QString);
    QString getFileName();
    int getComparisonFlag();
    void setComparisonFlag(int);
    void setjumpedline(int);
    void setendFlag(int);
    QJsonObject getQjsonobj();
    QString getOutput();
    QMap<QString, Variable*>* getVMap();
    QMap<QString, Label*> getLMap();

  private:
    QJsonObject programObj;
    QString fileName;
    int comparisonFlag;
    int linejump;
    int endflag;
    Identifier **identifier;
    QJsonValue *statements;
    Statement *stat;
    QMap<QString, Label*> labelMap;
    QMap<QString, Variable*> *varibleMap;
    QString output = "";
};

#endif
