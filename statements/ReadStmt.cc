#include "../headerFiles/ReadStmt.h"
using namespace std;

ReadStmt::ReadStmt()
  :Statement(){}

void ReadStmt::compile(QString stat){
  if(label->getName() != nullptr){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void ReadStmt::run(){}
