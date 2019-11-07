#ifndef JUMPSTMT_H
#define JUMPSTMT_H

#include "../headerFiles/Statement.h"

class JumpStmt : public Statement {
  public:
    JumpStmt();
    void compile(string *instr);
    void run();

  protected:
    Operand *operand1, *operand2;
    Label *label;
    Program *program;
    string instruction;
};
#endif
