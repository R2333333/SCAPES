#include "Operand.h"

Operand::Operand(QString n){
  name = n
}

Operand::~Operand(){}

Identifier Operand::GetIdent(){
  return identifier;
}
