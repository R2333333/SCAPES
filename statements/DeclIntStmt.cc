#include "../headerFiles/DeclIntStmt.h"
using namespace std;

DeclIntStmt::DeclIntStmt(){}

void DeclIntStmt::compile(QString stat){

  QStringList list = stat.split(" ");

  instruction = list.at(0);
  operand1 = new Operand(list.at(1));

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();

}

void DeclIntStmt::run(){
  Variable *a = new Variable(this->getFirstOperand(), NULL, "int");
  map->insert("a", a);
}
