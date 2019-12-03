#include "../headerFiles/PrintStmt.h"
using namespace std;

PrintStmt::PrintStmt(){}

void PrintStmt::compile(QString stat){
    QStringList list = stat.split(" ");

    instruction = list.at(0);
    operand1 = new Operand(list.at(1));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();
}

void PrintStmt::run(){}
