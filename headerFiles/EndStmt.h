#ifndef ENDSTMT_H
#define ENDSTMT_H

#include "Statement.h"

class EndStmt : public Statement {
  public:
    EndStmt();
    void compile(string *instr);
    void run();

  protected:
    Operand *operand1, *operand2;
    Label *label;
    Program *program;
    string instruction;
};
#endif
