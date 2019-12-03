#include "../headerFiles/PrintStmt.h"
using namespace std;

PrintStmt::PrintStmt(){}

void PrintStmt::compile(QString stat){
  if(label->getName() != nullptr){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void PrintStmt::run(){}
