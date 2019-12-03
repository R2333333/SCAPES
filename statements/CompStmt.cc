#include "../headerFiles/CompStmt.h"
#include <QDebug>
using namespace std;

CompStmt::CompStmt(){}

void CompStmt::compile(QString stat){
  
  if(label->getName() != nullptr){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();

  statementObj["Operand2"] = this->getSecondOperand();
}

void CompStmt::run(){}
