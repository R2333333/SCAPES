#include "../headerFiles/Statement.h"
using namespace std;

class ReadStmt : public Statement {
  public:
    void compile(string *instr){}
    void run(){};
};
