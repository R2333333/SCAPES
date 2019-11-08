#ifndef COMPSTMT_H
#define COMPSTMT_H

#include "Statement.h"

class CompStmt : public Statement {
  public:
    CompStmt(QString = "", Operand* = NULL, Operand* = NULL);
    void compile(QString*);
    void run();

  protected:
    Operand *operand1, *operand2;
    Label *label;
    Program *program;
    QString instruction;
};
#endif
