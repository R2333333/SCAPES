#include "../headerFiles/ReadStmt.h"
using namespace std;

ReadStmt::ReadStmt()
  :Statement(){}

void ReadStmt::compile(QString stat){
  QStringList list = stat.split(" ");

  instruction = list.at(0);
  operand1 = new Operand(list.at(1));

  statementObj["Instruction"] = instruction;

  statementObj["Operand1"] = this->getFirstOperand();
}

void ReadStmt::run(){
    if(map->contains(this->getFirstOperand())){
        int input = QInputDialog::getInt(nullptr, ("Please enter an integer"), ("Value:"));

        if(map->find(this->getFirstOperand()).value()->getType() == "int"){
            map->find(this->getFirstOperand()).value()->setValue(input);
        }

        if(map->find(this->getFirstOperand()).value()->getType() == "array"){
            map->find(this->getFirstOperand()).value()->addArrElement(input);
        }

    }else {
        QMessageBox::warning(nullptr, "Error", QString("No such variable name being found!"));
    }
}
