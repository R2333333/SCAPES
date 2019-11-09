#include "../headerFiles/CompStmt.h"
using namespace std;

CompStmt::CompStmt(){}

void CompStmt::compile(QJsonObejct &obj){
  if(label->GetName() != NULL){
    obj["Label"] = label->GetName();
  }

  obj["Instruction"] = instruction;

  obj["Operand1"] = this->getFirstOperand();

  obj["Operand2"] = this->getSecondOperand();
}

void CompStmt::run(){}
