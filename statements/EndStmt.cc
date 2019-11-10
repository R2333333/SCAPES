#include "../headerFiles/EndStmt.h"
using namespace std;

EndStmt::EndStmt(QString labelname, QString inst, QString op1, QString op2)
  :Statement(labelname, inst, op1, op2){}

void EndStmt::compile(){
  if(label->getName() != NULL){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;
}

void EndStmt::run(){};
