#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "../headerFiles/Statement.h"

Statement::Statement(sting inst, Operand *op1, Operand *op2){
  instruction = inst;
  operand1 = op1;
  operand2 = op2;
}

string Statement::getInstruction(){
  return instruction;
}

string Statement::getFirstOperand(){
  return operand1;
}

string Statement::getSecondOperand(){
  return operand2;
}
