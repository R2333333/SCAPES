#ifndef READSTMT_H
#define READSTMT_H

#include "../headerFiles/Statement.h"

class ReadStmt : public Statement {
  public:
    ReadStmt();
    void compile(string *instr);
    void run();

  protected:
    Operand *operand1, *operand2;
    Label *label;
    Program *program;
    string instruction;
};
#endif
