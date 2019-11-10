#include "headerFiles/Program.h"
#include <QJsonDocument>
#include <QDebug>

using namespace std;

Program::Program(QString fileName){
    this->fileName = fileName;
}

//compile each statement
void Program::compile(){
//  for (Statement **s = statement; s != NULL; s++){
//    (*s)->compile((*s)->getInstruction());
//  }
    QJsonArray statArray;
    QJsonArray identArray;

    programObj["name"] = fileName;

//    //get statement objects
//    for (Statement **s = statement; *s != NULL; ++s){
//        statArray.append((*s)->getObject());
//    }

//    //get identifier objects
//    for (Identifier **i = identifier; *i != NULL; ++i){
//        identArray.append((*i)->getObj());
//    }

    programObj["statements"] = statArray;
    programObj["identifiers"] = identArray;

    QJsonDocument doc(programObj);
    qDebug() << doc.toJson(QJsonDocument::Indented);
    qDebug() << "WTF";
}

//print out the program
void Program::print(){}

//change the program's name
void Program::setFileName(QString fileName){}

//get fileName
QString Program::getFileName(){return this->fileName;}

int Program::getComparisonFlag(){return this->comparisonFlag;}
