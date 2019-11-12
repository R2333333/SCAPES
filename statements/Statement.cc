#include <iostream>
#include <iomanip>
#include <QDebug>

using namespace std;

#include "../headerFiles/Statement.h"

Statement::Statement(QString labelname, QString inst, QString op1, QString op2){
  label = new Label(labelname);
  instruction = inst;
  operand1 = new Operand(op1);
  operand2 = new Operand(op2);
  //qDebug() << "Statement constructor" << endl;
}

Statement::~Statement(){
  delete operand1;
  delete operand2;
  delete label;
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
