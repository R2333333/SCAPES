#ifndef JUMPSTMT_H
#define JUMPSTMT_H

#include "../headerFiles/Statement.h"

class JumpStmt : public Statement {
  public:
    void compile(QJsonObejct &);
    void run();

};
#endif
