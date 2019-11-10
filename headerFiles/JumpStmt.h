#ifndef JUMPSTMT_H
#define JUMPSTMT_H

#include "../headerFiles/Statement.h"

class JumpStmt : public Statement {
  public:
    JumpStmt(QString = NULL, QString = NULL, QString = NULL, QString = NULL);
    void compile();
    void run();

};
#endif
