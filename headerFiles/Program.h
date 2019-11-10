#ifndef PROGRAM_H
#define PROGRAM_H
#include "Identifier.h"
#include <QString>
#include "Statement.h"
#include "DeclIntStmt.h"
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QMessageBox>

class Program{
  public:
    Program(QString);
	  void compile();
	  void print();
    void setFileName(QString);
    QString getFileName();
	  int getComparisonFlag();

  private:

      QJsonObject programObj;
      QString fileName;
	  int comparisonFlag;
	  Identifier **identifier;
    Statement **statement;
};

#endif
