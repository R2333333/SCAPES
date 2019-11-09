#include "../headerFiles/ReadStmt.h"
using namespace std;

ReadStmt::ReadStmt(){}

void ReadStmt::compile(QJsonObejct &obj){
  if(label->GetName() != NULL){
    obj["Label"] = label->GetName();
  }

  obj["Instruction"] = instruction;

  obj["Operand1"] = this->getFirstOperand();
}

void ReadStmt::run(){}
