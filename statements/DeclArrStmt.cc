#include "../headerFiles/DeclArrStmt.h"
#include "../headerFiles/Program.h"
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
    if(program->getVMap()->contains(operand1->getIdent()->getName())){
        QMessageBox::warning(nullptr, "Error", QString("Variable already exists!!!"));
    }else {
        Variable *a = new Variable(operand1->getIdent()->getName(), NULL, "array");
        a->setArr(operand2->getIdent()->getName().toInt());
        program->getVMap()->insert(operand1->getIdent()->getName(), a);
    }

}

