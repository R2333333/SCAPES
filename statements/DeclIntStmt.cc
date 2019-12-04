#include "../headerFiles/DeclIntStmt.h"
#include "../headerFiles/Program.h"
using namespace std;

DeclIntStmt::DeclIntStmt(){}

void DeclIntStmt::compile(QString stat){

  QStringList list = stat.split(" ");

  instruction = list.at(0);
  operand1 = new Operand(list.at(1));

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();

}
#include <QDebug>
void DeclIntStmt::run(){
    //qDebug() << operand1->getIdent()->getName();
  program->getVMap()->insert(operand1->getIdent()->getName(), nullptr);
}
