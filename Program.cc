#include "headerFiles/Program.h"
#include <QDebug>

using namespace std;

Program::Program(QString fileName){
    this->fileName = fileName;
}

//compile each statement
Program::~Program(){
  delete identifier;
  delete stat;
  //qDebug() << "Program destructor" << endl;
}

void Program::compile(){

    int lineCount = 0;
    QFile inputFile(getFileName());
    QJsonArray statArray;
    QJsonArray identArray;

    inputFile.open(QFile::ReadOnly);

    QTextStream in(&inputFile);

    while (!in.atEnd()){

        QString s = in.readLine();
        lineCount += 1;

        if(s.isEmpty()){
            continue;
        }

        if (s.contains("#")){
            continue;
        }

        if (s.startsWith("L")){
           Identifier *l = new Label(s, lineCount);
           identArray.append(" ");
        }

        if (s.startsWith("rdi")){
            stat = new ReadStmt();
            stat->compile(s);
        }

        if (s.startsWith("dci")){
            stat = new DeclIntStmt();
            stat->compile(s);
        }
        if (s.startsWith("prt")){
            stat = new PrintStmt();
            stat->compile(s);
        }
        if (s.startsWith("jmr")){
            stat = new JumpStmt();
            stat->compile(s);
        }
        if (s.startsWith("cmp")){
            stat = new CompStmt();
            stat->compile(s);
        }
        if (s.startsWith("end")){
            stat = new EndStmt();
            stat->compile(s);
        }

        statements.push_back(stat);

    }

    programObj["programPath"] = fileName;

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

    qDebug() << endl << programObj << endl;
    //qDebug() << "WTF" << endl;
}

QJsonObject Program::getQjsonobj(){
    return programObj;
}

//print out the program
void Program::print(){}

//change the program's name
void Program::setFileName(QString fileName){}

//get fileName
QString Program::getFileName(){return this->fileName;}

int Program::getComparisonFlag(){return this->comparisonFlag;}
