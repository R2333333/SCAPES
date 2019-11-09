#include "../headerFiles/DeclIntStmt.h"
using namespace std;

DeclIntStmt::DeclIntStmt(){}

void DeclIntStmt::compile(){
  if(label->GetName() != NULL){
    statementObj["Label"] = label->GetName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();

}

void DeclIntStmt::run(){}
