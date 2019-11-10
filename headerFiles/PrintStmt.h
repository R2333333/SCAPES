#ifndef PRINTSTMT_H
#define PRINTSTMT_H

#include "../headerFiles/Statement.h"

class PrintStmt : public Statement {
  public:
    PrintStmt(QString = NULL, QString = NULL, QString = NULL, QString = NULL);
    void compile();
    void run();

};
#endif
