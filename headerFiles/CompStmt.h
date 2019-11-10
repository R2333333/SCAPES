#ifndef COMPSTMT_H
#define COMPSTMT_H

#include "Statement.h"

class CompStmt : public Statement {
  public:
    CompStmt(QString = NULL, QString = NULL, QString = NULL, QString = NULL);
    void compile();
    void run();

};
#endif
