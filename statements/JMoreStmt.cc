#include "../headerFiles/JMoreStmt.h"
using namespace std;

JMoreStmt::JMoreStmt(){}

void JMoreStmt::compile(QJsonObejct &obj){
  if(label->GetName() != NULL){
    obj["Label"] = label->GetName();
  }

  obj["Instruction"] = instruction;

  obj["Operand1"] = this->getFirstOperand();
}

void JMoreStmt::run(){};
