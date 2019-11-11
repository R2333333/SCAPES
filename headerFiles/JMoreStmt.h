#ifndef JMORESTMT_H
#define JMORESTMT_H

#include "../headerFiles/Statement.h"

class JMoreStmt : public Statement {
  public:
    JMoreStmt(QString = nullptr, QString = nullptr, QString = nullptr, QString = nullptr);
    void compile();
    void run();
};
#endif
