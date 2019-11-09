#include "../headerFiles/EndStmt.h"
using namespace std;

EndStmt::EndStmt(){}

void EndStmt::compile(QJsonObejct &obj){
  if(label->GetName() != NULL){
    obj["Label"] = label->GetName();
  }

  obj["Instruction"] = instruction;
}

void EndStmt::run(){};
