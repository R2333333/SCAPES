#ifndef JMORESTMT_H
#define JMORESTMT_H

#include "../headerFiles/Statement.h"

class JMoreStmt : public Statement {
  public:
    JMoreStmt(QString = NULL, QString = NULL, QString = NULL, QString = NULL);
    void compile();
    void run();
};
#endif
