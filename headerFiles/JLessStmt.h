#ifndef JLESSSTMT_H
#define JLESSSTMT_H

#include "../headerFiles/Statement.h"

class JLessStmt : public Statement {
  public:
    JLessStmt(QString = nullptr, QString = nullptr, QString = nullptr, QString = nullptr);
    void compile();
    void run();
};
#endif
