#include "../headerFiles/EndStmt.h"
using namespace std;

EndStmt::EndStmt(){}

void EndStmt::compile(QString stat){
  if(label->getName() != nullptr){
    statementObj["Label"] = label->getName();
  }

  statementObj["Instruction"] = instruction;
}

void EndStmt::run(){};
