#ifndef INDCOM_H
#define INDCOM_H

#include "Statement.h"

class IndCom : public Statement {
  public:
    IndCom();
    void compile(string *instr);
    void run();

  protected:
    Operand *operand1, *operand2;
    Label *label;
    Program *program;
    string instruction;
};
#endif
