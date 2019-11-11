#ifndef DECLINTSTMT_H
#define DECLINTSTMT_H

#include "../headerFiles/Statement.h"

class DeclIntStmt : public Statement {
  public:
    DeclIntStmt(QString = nullptr, QString = nullptr, QString = nullptr, QString = nullptr);
    void compile();
    void run();
};
#endif
