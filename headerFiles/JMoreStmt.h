#ifndef JMORESTMT_H
#define JMORESTMT_H

#include "../headerFiles/Statement.h"

class JMoreStmt : public Statement {
  public:
    void compile();
    void run();
};
#endif
