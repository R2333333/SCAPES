#include "../headerFiles/ReadStmt.h"
using namespace std;

ReadStmt::ReadStmt(){}

void ReadStmt::compile(){
  if(label->GetName() != NULL){
    statementObj["Label"] = label->GetName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void ReadStmt::run(){}
