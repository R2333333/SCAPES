#include "../headerFiles/JEqStmt.h"
using namespace std;

JEqStmt::JEqStmt(){}

void JEqStmt::compile(QString stat){
    QStringList list = stat.split(" ");

    instruction = list.at(0);
    operand1 = new Operand(list.at(1));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();
}

void JEqStmt::run(){}
