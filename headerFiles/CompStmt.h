#ifndef COMPSTMT_H
#define COMPSTMT_H

#include "../headerFiles/Statement.h"

class CompStmt : public Statement {
  public:
    CompStmt(string = "", string = "", string ="");
    int compile(Statement*);
    void run();

  protected:
    Operand *operand1, *operand2;
    Label *label;
    Program *program;
    string instruction;
};
#endif
