#include "../headerFiles/DeclArrStmt.h"
using namespace std;

DeclArrStmt::DeclArrStmt(){}

void DeclArrStmt::compile(QString stat){
  QStringList list = stat.split(" ");

  instruction = list.at(0);

  operand1 = new Operand(list.at(1));
  operand2 = new Operand(list.at(2));

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();

  statementObj["Operand2"] = this->getSecondOperand();

}

void DeclArrStmt::run(){
//    Variable *a = new Variable(this->getFirstOperand(), NULL, "int");
//    a->setArr(this->getSecondOperand().toInt());
//    map->insert("a", a);
}

