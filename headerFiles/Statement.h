#ifndef STATEMENT_H
#define STATEMENT_H
#include <QString>
#include "Label.h"
#include "Operand.h"

using namespace std;

class Program;

class Statement{
public:
  Statement(Label* labelName, QString Instruc = NULL, Operand* = NULL, Operand* = NULL);
  virtual void compile(QString*) = 0;
  virtual void run() = 0;
  QString *getInstruction();
  QString *getFirstOperand();
  QString *getSecondOperand();
  virtual ~Statement();

protected:
  Operand *operand1, *operand2;
  Label *label;
  Program *program;
  QString instruction;
//class Statement{

};
#endif
