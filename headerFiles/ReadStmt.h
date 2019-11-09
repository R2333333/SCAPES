#ifndef READSTMT_H
#define READSTMT_H

#include "../headerFiles/Statement.h"

class ReadStmt : public Statement {
  public:
    void compile(QJsonObejct &);
    void run();

};
#endif
