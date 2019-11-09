#ifndef STATEMENT_H
#define STATEMENT_H
#include <QString>
#include "Label.h"
#include "Operand.h"

using namespace std;

class Program;

class Statement{
public:
  Statement(QString = NULL, QString = NULL, QString = NULL, QString = NULL);
  virtual void compile(QJsonObejct &) = 0;
  virtual void run() = 0;
  QString *getInstruction();
  QString *getFirstOperand();
  QString *getSecondOperand();
  QJsonObejct getObj();
  void ChooseStmt();
  ~Statement();

protected:
  Operand *operand1, *operand2;
  Label *label;
  Program *program;
  QString instruction;
  QJsonObejct jsonobj;
};
#endif
