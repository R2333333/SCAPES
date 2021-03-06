#include "../headerFiles/JumpStmt.h"
#include "../headerFiles/Program.h"
using namespace std;

JumpStmt::JumpStmt(){}

void JumpStmt::compile(QString stat){
    if (checkError(stat)){
        return;
    }
    QStringList list = stat.split(" ");

    instruction = list.at(0);
    operand1 = new Operand(list.at(1));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();
}

void JumpStmt::run(){
    int jumpedline;
    jumpedline = program->getLMap().value(operand1->getIdent()->getName())->getLine();
    program->setjumpedline(jumpedline);
}
