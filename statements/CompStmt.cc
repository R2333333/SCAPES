#include "../headerFiles/CompStmt.h"
using namespace std;

CompStmt::CompStmt(){}

void CompStmt::compile(){
  if(label->GetName() != NULL){
    statementObj["Label"] = label->GetName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();

  statementObj["Operand2"] = this->getSecondOperand();
}

void CompStmt::run(){}
