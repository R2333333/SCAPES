#include "Identifier.h"

Identifier::Identifier(QString n){
  name = n;
}

Identifier::~Identifier(){}

QString Identifier:GetName(){
  return name;
}
