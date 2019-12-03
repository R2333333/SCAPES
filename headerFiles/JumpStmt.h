#ifndef JUMPSTMT_H
#define JUMPSTMT_H

#include "../headerFiles/Statement.h"

class JumpStmt : public Statement {
  public:
    JumpStmt();
    void compile(QString);
    void run();

};
#endif
