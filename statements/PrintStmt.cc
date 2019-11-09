#include "../headerFiles/PrintStmt.h"
using namespace std;

PrintStmt::PrintStmt(){}

void PrintStmt::compile(){
  if(label->GetName() != NULL){
    statementObj["Label"] = label->GetName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void PrintStmt::run(){}
