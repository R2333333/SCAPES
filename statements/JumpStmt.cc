#include "../headerFiles/JumpStmt.h"
using namespace std;

JumpStmt::JumpStmt(){}

void JumpStmt::compile(QJsonObejct &obj){
  if(label->GetName() != NULL){
    obj["Label"] = label->GetName();
  }

  obj["Instruction"] = instruction;

  obj["Operand1"] = this->getFirstOperand();
}

void JumpStmt::run(){};
