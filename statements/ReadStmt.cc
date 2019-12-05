#include "../headerFiles/ReadStmt.h"
#include "../headerFiles/Program.h"
using namespace std;

ReadStmt::ReadStmt()
  :Statement(){}

void ReadStmt::compile(QString stat){
    if (checkError(stat)){
        return;
    }
  QStringList list = stat.split(" ");

  instruction = list.at(0);
  operand1 = new Operand(list.at(1));

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void ReadStmt::run(){

    if(!program->getVMap()->contains(operand1->getIdent()->getName())){
        QMessageBox::warning(nullptr, "Error", QString("Variable not exists yet!!!"));
    }else {
        int input = QInputDialog::getInt(nullptr, ("Please enter an integer"), ("Value:"));

        if(program->getVMap()->value(operand1->getIdent()->getName())->getType().compare("int") == 0){
            program->getVMap()->value(operand1->getIdent()->getName())->setValue(input);
        }

        if(program->getVMap()->value(operand1->getIdent()->getName())->getType().compare("array") == 0){
            program->getVMap()->value(operand1->getIdent()->getName())->addArrElement(input);
        }
    }

}
