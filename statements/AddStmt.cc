#include "../headerFiles/AddStmt.h"
using namespace std;

AddStmt::AddStmt(QString labelname, QString inst, QString op1, QString op2)
  :Statement(labelname, inst, op1, op2){}

void AddStmt::compile(){
  if(label->getName() != nullptr){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();

  statementObj["Operand2"] = this->getSecondOperand();

}

void AddStmt::run(){}
