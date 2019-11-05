#include "../headerFiles/Statement.h"
using namespace std;

class ReadStmt : public Statement {
  public:
    ReadStmt(){}
    void compile(string *instr){}
    void run(){};
};
