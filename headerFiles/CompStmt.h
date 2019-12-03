#ifndef COMPSTMT_H
#define COMPSTMT_H

#include "../headerFiles/Statement.h"

class CompStmt : public Statement {
  public:
    CompStmt();
    void compile(QString);
    void run();

};
#endif
