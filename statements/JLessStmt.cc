#include "../headerFiles/JLessStmt.h"
using namespace std;

JLessStmt::JLessStmt(QString labelname, QString inst, QString op1, QString op2)
  :Statement(labelname, inst, op1, op2){}

void JLessStmt::compile(){
  if(label->getName() != nullptr){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void JLessStmt::run(){};
