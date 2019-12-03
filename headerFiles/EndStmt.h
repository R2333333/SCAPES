#ifndef ENDSTMT_H
#define ENDSTMT_H

#include "../headerFiles/Statement.h"

class EndStmt : public Statement {
  public:
    EndStmt();
    void compile(QString);
    void run();

};
#endif
