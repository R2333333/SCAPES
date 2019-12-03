#ifndef DECLINTSTMT_H
#define DECLINTSTMT_H

#include "../headerFiles/Statement.h"

class DeclIntStmt : public Statement {
  public:
    DeclIntStmt();
    void compile(QString);
    void run();
};
#endif
