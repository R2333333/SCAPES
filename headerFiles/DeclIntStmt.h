#ifndef DECLINTSTMT_H
#define DECLINTSTMT_H

#include "../headerFiles/Statement.h"

class DeclIntStmt : public Statement {
  public:
    DeclIntStmt();
    void compile(string *instr);
    void run();

  protected:
    Operand *operand1, *operand2;
    Label *label;
    Program *program;
    string instruction;
};
#endif
