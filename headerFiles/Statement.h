#ifndef STATEMENT_H
#define STATEMENT_H
#include <string>
#include "Label.h"
#include "Operand.h"

using namespace std;

class Program;

class Statement{
public:
  Statement(string = "", Operand*=NULL, Operand*=NULL);
  virtual void compile(string*) = 0;
  virtual void run() = 0;
  string *getInstruction();
  string *getFirstOperand();
  string *getSecondOperand();

protected:
  Operand *operand1, *operand2;
  Label *label;
  Program *program;
  string instruction;
};

#endif
