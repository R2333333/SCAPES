#include "headerFiles/Identifier.h"

Identifier::Identifier(QString n){
  name = n;
}

Identifier::~Identifier(){}

QString Identifier::getName(){
  return name;
}
