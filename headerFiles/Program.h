#ifndef PROGRAM_H
#define PROGRAM_H
#include "Identifier.h"
#include <qstring.h>
#include "Statement.h"
#include <QJsonObject>
#include <QJsonArray>

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
