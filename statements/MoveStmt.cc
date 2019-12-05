#include "../headerFiles/MoveStmt.h"
#include "../headerFiles/Program.h"
#include <QDebug>
using namespace std;

MoveStmt::MoveStmt(){}

void MoveStmt::compile(QString stat){
    if (checkError(stat)){
        return;
    }
    QStringList list = stat.split(" ");

    instruction = list.at(0);
    operand1 = new Operand(list.at(1));
    operand2 = new Operand(list.at(2));

    statementObj["Instruction"] = instruction;

    statementObj["Operand1"] = this->getFirstOperand();

    statementObj["Operand2"] = this->getSecondOperand();
}


void MoveStmt::run(){

    int value1, index1, index2;
    QString arr1, arr2, a1Index, a2Index;

    if(!checkNum(operand1->getIdent()->getName())){ //if input1 is not an integer (variable)
        if(!operand1->getIdent()->getName().startsWith("$")){ // if input1 is a int variable
            if(!program->getVMap()->contains(operand1->getIdent()->getName())){ //check if it is not in the map
                QMessageBox::warning(nullptr, "Error", QString("Source Variable not exists yet!!!"));
            }else{ //int variable is in the map
                value1 = program->getVMap()->value(operand1->getIdent()->getName())->getValue();
            }
        }else{ // input1 is array variable
            QStringList l = operand1->getIdent()->getName().remove("$").split("+");
            arr1 = l[0];
            a1Index = l[1];
            if(!program->getVMap()->contains(arr1)){ //if input1 array not in the map
                QMessageBox::warning(nullptr, "Error", QString("Source array variable not exists yet!!!"));
            }else{ //array variable is in the map
                if(!checkNum(a1Index)){ //check if index is a variable
                    if(!program->getVMap()->contains(a1Index)){ //Operand1 index variable is not in the map
                        QMessageBox::warning(nullptr, "Error", QString("Operand1 Index Variable not exists yet!!!"));
                    }else{ //index variable is in the map
                        index1 = program->getVMap()->value(a1Index)->getValue();
                    }
                }else{ //index is an integer
                    index1 = a1Index.toInt();
                }
                value1 = program->getVMap()->value(arr1)->getArrElement(index1);
            }
        }
    }else{ //if input1 is an interger
        qDebug() << "11111111" << endl;
        value1 = operand1->getIdent()->getName().toInt();
    }

    if(!operand2->getIdent()->getName().startsWith("$")){ // if input2 is an int variable
        if(checkNum(operand2->getIdent()->getName())){//check operand2 is an integer
            QMessageBox::warning(nullptr, "Error", QString("Operand2 is not a variable"));
        }else{//operand2 not an integer
            if(!program->getVMap()->contains(operand2->getIdent()->getName())){ //int variable not in the map
                QMessageBox::warning(nullptr, "Error", QString("Destination Variable not exists yet!!!"));
            }else{ //int variable is in the map
                program->getVMap()->value(operand2->getIdent()->getName())->setValue(value1);
            }
        }
    }else{ //input2 is an array variable
        qDebug() << "22222" << endl;
        QStringList l = operand2->getIdent()->getName().remove("$").split("+");
        arr2 = l[0];
        a2Index = l[1];
        if(!program->getVMap()->contains(arr2)){ //if input2 array not in the map
            QMessageBox::warning(nullptr, "Error", QString("Destination array variable not exists yet!!!"));
        }else{ //Destination array variable is in the map
            if(!checkNum(a2Index)){ //check if index is a variable
                if(!program->getVMap()->contains(a2Index)){ //Operand1 index variable is not in the map
                    QMessageBox::warning(nullptr, "Error", QString("Operand2 Index Variable not exists yet!!!"));
                }else{ //Operand2 index variable is in the map
                    qDebug() << "33333" << endl;
                    index2 = program->getVMap()->value(a2Index)->getValue();
                }
            }else{ //index is an integer
                index2 = a2Index.toInt();
            }
            program->getVMap()->value(arr2)->setArrElement(index2, value1);
        }
    }

};
