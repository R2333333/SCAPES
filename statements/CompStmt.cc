#include <iostream>
using namespace std;
#include <string>

#include "../headerFiles/CompStmt.h"

CompStmt::CompStmt(string inst, string op1, string op2)
:Statement(inst, op1, op2){}

int CompStmt::compile(){
  //return cmp->operand1 > cmp->operand2;
  stringstream x(this->getFirstOperand());
  stringstream y(this->getSecondOperand());

  int op1 = 0, op2 = 0;

  x >> op1;
  y >> op2;
  //Remember the return value, it will be used into jump function!!!
  if(op1 > op2){
    return 0;
  }else if (op1 < op2){
    return 1;
  }else{
    return 2;
  }
}
