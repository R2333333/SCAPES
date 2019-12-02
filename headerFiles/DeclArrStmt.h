#ifndef DECLARRSTMT_H
#define DECLARRSTMT_H

#include "../headerFiles/Statement.h"

class DeclArrStmt : public Statement {
  public:
    DeclArrStmt(QString = nullptr, QString = nullptr, QString = nullptr, QString = nullptr);
    void compile();
    void run();
};
#endif
