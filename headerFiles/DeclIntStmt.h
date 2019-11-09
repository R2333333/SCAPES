#ifndef DECLINTSTMT_H
#define DECLINTSTMT_H

#include "../headerFiles/Statement.h"

class DeclIntStmt : public Statement {
  public:
    void compile(QJsonObejct &);
    void run();
};
#endif
