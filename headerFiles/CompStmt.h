#ifndef COMPSTMT_H
#define COMPSTMT_H

#include "../headerFiles/Statement.h"

class CompStmt : public Statement {
  public:
    CompStmt(QString = nullptr, QString = nullptr, QString = nullptr, QString = nullptr);
    void compile();
    void run();

};
#endif
