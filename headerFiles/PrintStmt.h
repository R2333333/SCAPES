#ifndef PRINTSTMT_H
#define PRINTSTMT_H

#include "../headerFiles/Statement.h"

class PrintStmt : public Statement {
  public:
    PrintStmt();
    void compile(QString);
    void run();

};
#endif
