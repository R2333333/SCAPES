#include <iostream>
using namespace std;
#include <qstring.h>

#include "../headerFiles/CompStmt.h"

CompStmt::CompStmt(QString inst, Operand* op1, Operand* op2)
:Statement(inst, op1, op2){}

void Statement::compile(QString *a){
  //return cmp->operand1 > cmp->operand2;

}
