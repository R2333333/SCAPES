#include "../headerFiles/JumpStmt.h"
using namespace std;

JumpStmt::JumpStmt(){}

void JumpStmt::compile(){
  if(label->GetName() != NULL){
    statementObj["Label"] = label->GetName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void JumpStmt::run(){};
