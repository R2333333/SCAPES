#ifndef ENDSTMT_H
#define ENDSTMT_H

#include "../headerFiles/Statement.h"

class EndStmt : public Statement {
  public:
    EndStmt(QString = nullptr, QString = nullptr, QString = nullptr, QString = nullptr);
    void compile();
    void run();

};
#endif
