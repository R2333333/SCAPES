#ifndef JLESSSTMT_H
#define JLESSSTMT_H

#include "../headerFiles/Statement.h"

class JLessStmt : public Statement {
  public:
    JLessStmt();
    void compile(QString);
    void run();
};
#endif
