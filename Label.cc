#include "headerFiles/Label.h"


Label::Label(QString n, int line){
    QStringList l = n.split("[(:| )]");
    name = l[0];
    this->line = line;
}

Label::~Label(){}
