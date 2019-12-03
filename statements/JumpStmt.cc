#include "../headerFiles/JumpStmt.h"
using namespace std;

JumpStmt::JumpStmt(){}

void JumpStmt::compile(QString stat){
  if(label->getName() != nullptr){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void JumpStmt::run(){};
