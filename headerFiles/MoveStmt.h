#ifndef MOVESTMT_H
#define MOVESTMT_H

#include "../headerFiles/Statement.h"

class MoveStmt : public Statement {
  public:
    MoveStmt(QString = nullptr, QString = nullptr, QString = nullptr, QString = nullptr);
    void compile();
    void run();
};
#endif
