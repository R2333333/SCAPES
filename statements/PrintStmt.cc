#include "../headerFiles/PrintStmt.h"
using namespace std;

PrintStmt::PrintStmt(){}

void PrintStmt::compile(QJsonObejct &obj){
  if(label->GetName() != NULL){
    obj["Label"] = label->GetName();
  }

  obj["Instruction"] = instruction;

  obj["Operand1"] = this->getFirstOperand();
}

void PrintStmt::run(){}
