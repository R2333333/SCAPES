#ifndef PRINTSTMT_H
#define PRINTSTMT_H

#include "../headerFiles/Statement.h"

class PrintStmt : public Statement {
  public:
    void compile();
    void run();

};
#endif
