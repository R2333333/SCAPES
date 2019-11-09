#include "../headerFiles/EndStmt.h"
using namespace std;

EndStmt::EndStmt(){}

void EndStmt::compile(){
  if(label->GetName() != NULL){
    statementObj["Label"] = label->GetName();
  }

  statementObj["Instruction"] = instruction;
}

void EndStmt::run(){};
