#ifndef MOVESTMT_H
#define MOVESTMT_H

#include "../headerFiles/Statement.h"

class MoveStmt : public Statement {
  public:
    MoveStmt();
    void compile(QString);
    void run();
};
#endif
