#ifndef DECLARRSTMT_H
#define DECLARRSTMT_H

#include "../headerFiles/Statement.h"

class DeclArrStmt : public Statement {
  public:
    DeclArrStmt();
    void compile(QString);
    void run();
};
#endif
