#ifndef ADDSTMT_H
#define ADDSTMT_H

#include "../headerFiles/Statement.h"

class AddStmt : public Statement {
  public:
    AddStmt(QString = nullptr, QString = nullptr, QString = nullptr, QString = nullptr);
    void compile();
    void run();
};
#endif
