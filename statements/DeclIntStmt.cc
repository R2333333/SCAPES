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

    if(program->getVMap()->contains(operand1->getIdent()->getName())){
        QMessageBox::warning(nullptr, "Error", QString("Variable already exists!!!"));
    }else {
        Variable *a = new Variable(operand1->getIdent()->getName(), NULL, "int");
        program->getVMap()->insert(operand1->getIdent()->getName(), a);
    }
}
