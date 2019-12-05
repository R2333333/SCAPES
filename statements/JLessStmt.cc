#include "../headerFiles/JLessStmt.h"
#include "../headerFiles/Program.h"
using namespace std;

JLessStmt::JLessStmt(){}

void JLessStmt::compile(QString stat){
    QStringList list = stat.split(" ");

    instruction = list.at(0);
    operand1 = new Operand(list.at(1));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();
}

void JLessStmt::run(){
    if(program->getComparisonFlag() != -1){
        return;
    }else{
        //program->getLMap()->contains(operand1->getIdent()->getName())
    }
}
