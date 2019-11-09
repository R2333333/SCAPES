#include "Operand.h"

Operand::Operand(){}

Operand::~Operand(){}

void Operand::SetOperandName(QString n){
  name = n;
}

Identifier Operand::GetIdent(){
  return identifier;
}
