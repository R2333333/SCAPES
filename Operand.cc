#include "headerFiles/Operand.h"

Operand::Operand(QString n){
  name = n;
  createIdent();
}

Operand::~Operand(){}

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
