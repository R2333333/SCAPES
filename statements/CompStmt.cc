#include "../headerFiles/CompStmt.h"
#include <QDebug>
using namespace std;

CompStmt::CompStmt(QString labelname, QString inst, QString op1, QString op2)
  :Statement(labelname, inst, op1, op2){}

void CompStmt::compile(){
  
  if(label->getName() != NULL){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();

  statementObj["Operand2"] = this->getSecondOperand();
}

void CompStmt::run(){}
