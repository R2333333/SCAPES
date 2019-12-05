#include "../headerFiles/JMoreStmt.h"
using namespace std;

JMoreStmt::JMoreStmt(){}

void JMoreStmt::compile(QString stat){
    if (checkError(stat)){
        return;
    }
    QStringList list = stat.split(" ");

    instruction = list.at(0);
    operand1 = new Operand(list.at(1));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();
}

void JMoreStmt::run(){};
