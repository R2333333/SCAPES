#include "../headerFiles/CompStmt.h"
#include <QDebug>
using namespace std;

CompStmt::CompStmt(){}

void CompStmt::compile(QString stat){
  
    QStringList list = stat.split(" ");

    instruction = list.at(0);
    operand1 = new Operand(list.at(1));
    operand2 = new Operand(list.at(2));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();

    statementObj["Operand2"] = this->getSecondOperand();
}

void CompStmt::run(){}
