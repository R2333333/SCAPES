#ifndef JEQSTMT_H
#define JEQSTMT_H

#include "../headerFiles/Statement.h"

class JEqStmt : public Statement {
  public:
    JEqStmt();
    void compile(QString);
    void run();
};
#endif
