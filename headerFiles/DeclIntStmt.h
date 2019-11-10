#ifndef DECLINTSTMT_H
#define DECLINTSTMT_H

#include "../headerFiles/Statement.h"

class DeclIntStmt : public Statement {
  public:
    DeclIntStmt(QString = NULL, QString = NULL, QString = NULL, QString = NULL);
    void compile();
    void run();
};
#endif
