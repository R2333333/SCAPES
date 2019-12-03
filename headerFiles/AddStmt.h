#ifndef ADDSTMT_H
#define ADDSTMT_H

#include "../headerFiles/Statement.h"

class AddStmt : public Statement {
  public:
    AddStmt();
    void compile(QString);
    void run();
};
#endif
