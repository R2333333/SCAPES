#include "../headerFiles/AddStmt.h"
#include "../headerFiles/Program.h"
using namespace std;

AddStmt::AddStmt(){}

void AddStmt::compile(QString stat){
    QStringList list = stat.split(" ");

    instruction = list.at(0);

    operand1 = new Operand(list.at(1));
    operand2 = new Operand(list.at(2));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();

    statementObj["Operand2"] = this->getSecondOperand();
}

void AddStmt::run(){
    if(!program->getVMap()->contains(operand1->getIdent()->getName())){
        QMessageBox::warning(nullptr, "Error", QString("Source Variable not exists yet!!!"));
    }else if(!program->getVMap()->contains(operand2->getIdent()->getName())){
        QMessageBox::warning(nullptr, "Error", QString("Destination Variable not exists yet!!!"));
    }else {
//        if(program->getVMap()->value(operand1->getIdent()->getName())->getType().compare("int") == 0){
//            program->getVMap()->value(operand1->getIdent()->getName())->setValue(input);
//        }

//        if(program->getVMap()->value(operand1->getIdent()->getName())->getType().compare("array") == 0){
//            program->getVMap()->value(operand1->getIdent()->getName())->addArrElement(input);
//        }
    }
}
