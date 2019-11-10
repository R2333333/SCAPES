#include "../headerFiles/ReadStmt.h"
using namespace std;

ReadStmt::ReadStmt(QString labelname, QString inst, QString op1, QString op2)
  :Statement(labelname, inst, op1, op2){}

void ReadStmt::compile(){
  if(label->getName() != NULL){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void ReadStmt::run(){}
