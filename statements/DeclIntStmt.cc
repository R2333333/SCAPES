#include "../headerFiles/DeclIntStmt.h"
using namespace std;

DeclIntStmt::DeclIntStmt(QString labelname, QString inst, QString op1, QString op2)
  :Statement(labelname, inst, op1, op2){}

void DeclIntStmt::compile(){
  if(label->getName() != NULL){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();

}

void DeclIntStmt::run(){}
