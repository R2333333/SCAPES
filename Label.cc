#include "headerFiles/Label.h"

Label::Label(QString name)
  :Identifier(name){
  //setLine(line);
}

void Label::setLine(int num){
  line = num;
}

int Label::getLine(){
  return line;
}
