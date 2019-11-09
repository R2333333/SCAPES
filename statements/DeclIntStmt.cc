#include <iostream>
using namespace std;
#include <qstring.h>

#include "../headerFiles/DeclIntStmt.h"

DeclIntStmt::DeclIntStmt(string inst, string op1, NULL)
    :Statement(inst, op1, NULL){}

void DeclIntStmt::compile(string op1){
  Qstring op1 = this->getFirstOperand();
}
