#include "../headerFiles/PrintStmt.h"
#include "../headerFiles/Program.h"
using namespace std;

PrintStmt::PrintStmt(){}

void PrintStmt::compile(QString stat){
    if (checkError(stat)){
        return;
    }
    QStringList list = stat.split(" ");

    instruction = list.at(0);
    operand1 = new Operand(list.at(1));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();
}

void PrintStmt::run(){
    if(!program->getVMap()->contains(operand1->getIdent()->getName())){
        QMessageBox::warning(nullptr, "Error", QString("Variable not exists yet!!!"));
    }else {
        if(program->getVMap()->value(operand1->getIdent()->getName())->getType().compare("int") == 0){
            cout << program->getVMap()->value(operand1->getIdent()->getName())->getValue() << endl;
        }

        if(program->getVMap()->value(operand1->getIdent()->getName())->getType().compare("array") == 0){
            program->getVMap()->value(operand1->getIdent()->getName())->print();
        }
    }

}
