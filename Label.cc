#include "headerFiles/Label.h"

Label::Label(QString n, int l){
    QString firstStat = "";
    bool start = false;
    for(QChar c: n){
        if(c == ':'){
            continue;
        }

        if (c == ' '){
            start = true;
        }

        if (start){
            restStat += c;
        }else{
            firstStat += c;
        }
    }

    name = firstStat;
    line = l;
    identifierObj["Label"] = name;
    identifierObj["LineNo."] = line;
}

void Label::setLine(int num){
  line = num;
}

int Label::getLine(){
  return line;
}

QString Label::getIns(){
    return restStat;
}

//Label::~Label(){}
