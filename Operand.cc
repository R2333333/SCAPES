#include "headerFiles/Operand.h"
#include <QDebug>
Operand::Operand(QString n){
  name = n;
  createIdent();
  qDebug() << "Operand constructor" << endl;
}

Operand::~Operand(){
qDebug() << "Operand destructor" << endl;
}

void Operand::createIdent(){
  if(name == "jmr" || name == "jmp"){
    identifier = new Label(name);
  }else{
    identifier = new Identifier(name);
  }
}

Identifier* Operand::getIdent(){
  return identifier;
}
