#ifndef JMORESTMT_H
#define JMORESTMT_H

#include "Statement.h"

class JMoreStmt : public Statement {
  public:
    JMoreStmt();
    void compile(string *instr);
    void run();

  protected:
    Operand *operand1, *operand2;
    Label *label;
    Program *program;
    string instruction;
};
#endif
