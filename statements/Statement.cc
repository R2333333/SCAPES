#include <iostream>
#include <iomanip>

using namespace std;

#include "../headerFiles/Statement.h"

Statement::Statement(QString lablename, QString inst, QString op1, QString op2){
  label = new Label(labelname);
  instruction = inst;
  operand1 = new Operand(op1);
  operand2 = new Operand(op2);
}

QJsonObejct Statement::getObj(){
  return jsonobj;
}

QString Statement::getInstruction(){
  return instruction;
}

QSring Statement::getFirstOperand(){
  return operand1->GetIdent().GetName();
}

QString Statement::getSecondOperand(){
  return operand2->GetIdent().GetName();
}
