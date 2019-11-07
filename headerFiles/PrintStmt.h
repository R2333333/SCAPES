#ifndef PRINTSTMT_H
#define PRINTSTMT_H

#include "../headerFiles/Statement.h"

class PrintStmt : public Statement {
  public:
    PrintStmt();
    void compile(string *instr);
    void run();

  protected:
    Operand *operand1, *operand2;
    Label *label;
    Program *program;
    string instruction;
};
#endif
