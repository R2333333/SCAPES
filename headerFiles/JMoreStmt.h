#ifndef JMORESTMT_H
#define JMORESTMT_H

#include "../headerFiles/Statement.h"

class JMoreStmt : public Statement {
  public:
    JMoreStmt();
    void compile(QString);
    void run();
};
#endif
