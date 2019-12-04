#include <iostream>
#include <iomanip>
#include <QDebug>

using namespace std;

#include "../headerFiles/Statement.h"

Statement::Statement(){}

//Statement::~Statement(){
//  delete operand1;
//  delete operand2;
//}

void Statement::setObj(QJsonValue obj, Program* p){
    //qDebug() << obj.toObject() << "???";
    QJsonObject oobj = obj.toObject();
    //qDebug() << oobj["Operand1"] << endl;
    if(!oobj["Operand1"].isNull()){
        //qDebug() << oobj["Operand1"].toString() << "!!!";
        operand1 = new Operand(oobj["Operand1"].toString());
    }

    if(!oobj["Operand2"].isNull()){
        operand2 = new Operand(oobj["Operand2"].toString());
    }

    program = p;
}

QJsonObject Statement::getObj(){
  return statementObj;
}

QString Statement::getInstruction(){
  return instruction;
}

QString Statement::getFirstOperand(){
  return operand1->getIdent()->getName();
}

QString Statement::getSecondOperand(){
  return operand2->getIdent()->getName();
}
