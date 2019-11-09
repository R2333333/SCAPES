#ifndef ENDSTMT_H
#define ENDSTMT_H

#include "../headerFiles/Statement.h"

class EndStmt : public Statement {
  public:
    void compile(QJsonObejct &);
    void run();

};
#endif
