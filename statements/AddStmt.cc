#include "../headerFiles/Statement.h"
#include <mainwindow.h>
using namespace std;

class ReadStmt : public Statement {
  public:
    ReadStmt();
    void compile(QString *instr){}
    void run(){};
};
