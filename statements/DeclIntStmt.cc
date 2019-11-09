#include "../headerFiles/DeclIntStmt.h"
using namespace std;

DeclIntStmt::DeclIntStmt(){}

void DeclIntStmt::compile(QJsonObejct &obj){
  if(label->GetName() != NULL){
    obj["Label"] = label->GetName();
  }

  obj["Instruction"] = instruction;

  obj["Operand1"] = this->getFirstOperand();

}

void DeclIntStmt::run(){}
