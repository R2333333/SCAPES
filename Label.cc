#include "headerFiles/Label.h"

void Label::setLine(int num){
  line = num;
}

int Label::getLine(){
  return line;
}

Label::Label(QString n, int line){
    QStringList l = n.split("[(:| )]");
    name = l[0];
    this->line = line;
}

Label::~Label(){}
