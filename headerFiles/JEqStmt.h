#ifndef JEQSTMT_H
#define JEQSTMT_H

#include "../headerFiles/Statement.h"

class JEqStmt : public Statement {
  public:
    JEqStmt(QString = nullptr, QString = nullptr, QString = nullptr, QString = nullptr);
    void compile();
    void run();
};
#endif
