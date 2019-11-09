#include <iostream>
#include <iomanip>

using namespace std;

#include "../headerFiles/Statement.h"

Statement::Statement(QString labelname, QString inst, Operand *op1, Operand *op2){
  label->SetLabelName(labelname);
  instruction = inst;
  operand1 = op1;
  operand2 = op2;
}

QString Statement::getInstruction(){
  return instruction;
}

QSring Statement::getFirstOperand(){
  return operand1;
}

QString Statement::getSecondOperand(){
  return operand2;
}
