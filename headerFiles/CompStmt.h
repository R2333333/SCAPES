#ifndef COMPSTMT_H
#define COMPSTMT_H

#include "../headerFiles/Statement.h"

class CompStmt : public Statement {
  public:
    void compile();
    void run();

};
#endif
