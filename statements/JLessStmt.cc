#include "../headerFiles/JLessStmt.h"
using namespace std;

JLessStmt::JLessStmt(){}

void JLessStmt::compile(QString stat){
    if (checkError(stat)){
        return;
    }
    QStringList list = stat.split(" ");

    instruction = list.at(0);
    operand1 = new Operand(list.at(1));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();
}

void JLessStmt::run(){}
