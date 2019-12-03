#ifndef STATEMENT_H
#define STATEMENT_H
#include <QString>
#include "Label.h"
#include "Operand.h"
#include <QJsonObject>
#include <QMap>
#include <QMessageBox>
#include <QInputDialog>

using namespace std;

class Program;

class Statement{
public:
  Statement(QString = nullptr, QString = nullptr, QString = nullptr, QString = nullptr);
  virtual void compile() = 0;
  virtual void run() = 0;
  virtual QString getInstruction();
  virtual QString getFirstOperand();
  virtual QString getSecondOperand();
  virtual QJsonObject getObj();
  //void setMap(map<QString, Identifier>);
  //virtual ~Statement();

protected:
  Operand *operand1, *operand2;
  Label *label;
  Program *program;
  QMap<QString, Identifier*> *map;
  QString instruction;
  QJsonObject statementObj;

};
#endif
