#ifndef READSTMT_H
#define READSTMT_H

#include "../headerFiles/Statement.h"

class ReadStmt : public Statement {
  public:
    ReadStmt(QString = NULL, QString = NULL, QString = NULL, QString = NULL);
    void compile();
    void run();

};
#endif
