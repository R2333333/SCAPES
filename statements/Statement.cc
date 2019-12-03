#include <iostream>
#include <iomanip>
#include <QDebug>

using namespace std;

#include "../headerFiles/Statement.h"

Statement::Statement(){

  //qDebug() << "Statement constructor" << endl;
}

Statement::~Statement(){
  delete operand1;
  delete operand2;
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
