#ifndef READSTMT_H
#define READSTMT_H

#include "../headerFiles/Statement.h"

class ReadStmt : public Statement {
  public:
    void compile();
    void run();

};
#endif
