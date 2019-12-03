#include "../headerFiles/ReadStmt.h"
using namespace std;

ReadStmt::ReadStmt()
  :Statement(){}

void ReadStmt::compile(QString stat){
  if(label->getName() != nullptr){
    statementObj["Label"] = label->getName();
  }

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
