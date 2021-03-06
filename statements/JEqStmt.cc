#include "../headerFiles/JEqStmt.h"
#include "../headerFiles/Program.h"
using namespace std;

JEqStmt::JEqStmt(){}

void JEqStmt::compile(QString stat){
    if (checkError(stat)){
        return;
    }
    QStringList list = stat.split(" ");

    instruction = list.at(0);
    operand1 = new Operand(list.at(1));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();
}

void JEqStmt::run(){
    if(program->getComparisonFlag() != 0){
        return;
    }else{
        int jumpedline;
        jumpedline = program->getLMap().value(operand1->getIdent()->getName())->getLine();
        program->setjumpedline(jumpedline);
    }
}
