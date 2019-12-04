#include "headerFiles/Operand.h"
#include <QDebug>

Operand::Operand(QString n){
  name = n;
  createIdent();
}

Operand::~Operand(){
  delete identifier;
//qDebug() << "Operand destructor" << endl;
}

void Operand::createIdent(){
  identifier = new Identifier(name);
}

Identifier* Operand::getIdent(){
  return identifier;
}

//QString Operand::getName(){
//    return name;
//}
