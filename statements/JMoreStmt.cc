#include "../headerFiles/JMoreStmt.h"
using namespace std;

JMoreStmt::JMoreStmt(){}

void JMoreStmt::compile(QString stat){
  if(label->getName() != nullptr){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void JMoreStmt::run(){};
