#ifndef STATEMENT_H
#define STATEMENT_H
#include <QString>
#include <iostream>
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
  Statement();
  virtual void compile(QString) = 0;
  virtual void run() = 0;
  bool checkError(QString);
  QString getErrorMes();
  virtual QString getInstruction();
  virtual QString getFirstOperand();
  virtual QString getSecondOperand();
  void setObj(QJsonValue, Program*);
  bool checkNum(QString);
  virtual QJsonObject getObj();
  //virtual ~Statement();

protected:
  Operand *operand1, *operand2;
  //Label *label;
  Program *program;
  QMap<QString, Identifier*> *map;
  QString instruction;
  QJsonObject statementObj;
  QString errorMes=NULL;
  bool error = false;

};
#endif
