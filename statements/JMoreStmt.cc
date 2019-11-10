#include "../headerFiles/JMoreStmt.h"
using namespace std;

JMoreStmt::JMoreStmt(){}

void JMoreStmt::compile(){
  if(label->GetName() != NULL){
    statementObj["Label"] = label->GetName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void JMoreStmt::run(){};
