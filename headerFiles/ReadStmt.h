#ifndef READSTMT_H
#define READSTMT_H

#include "../headerFiles/Statement.h"

class ReadStmt : public Statement {
  public:
    ReadStmt();
    void compile(QString);
    void run();

};
#endif
