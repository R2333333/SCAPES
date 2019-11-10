#ifndef ENDSTMT_H
#define ENDSTMT_H

#include "../headerFiles/Statement.h"

class EndStmt : public Statement {
  public:
    EndStmt(QString = NULL, QString = NULL, QString = NULL, QString = NULL);
    void compile();
    void run();

};
#endif
