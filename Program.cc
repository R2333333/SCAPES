#include "headerFiles/Program.h"
#include <QDebug>


using namespace std;

Program::Program(QString fileName){
    this->fileName = fileName;
}

//compile each statement
void Program::compile(){

    int statCount = 0, identCount = 0;
    QFile inputFile(getFileName());
    QJsonArray statArray;
    QJsonArray identArray;


    if (!inputFile.open(QFile::ReadOnly)){
        QMessageBox::warning(nullptr, "Error", "Can not Open file");
    }


    QTextStream in(&inputFile);

    while (!in.atEnd()){

        QString s = in.readLine();

        qDebug() << s << endl;

        if(s.isEmpty()){
            continue;
        }

        const char* cp = s.toLocal8Bit().data();

        if (qstrncmp(cp, "#", 1) == 0){
            continue;
        }

        if(qstrncmp(cp, "dci",3) == 0){
            Statement *stat = new DeclIntStmt(NULL, "dci", "a", NULL);
            stat->compile();
            statArray.append(stat->getObj());
            continue;
        }

//        if(qstrncmp(cp, "rdi",3)){
//            Statement *stat = new DeclIntStmt();
//            stat->compile();
//            statArray.append(stat->getObj());
//            continue;
//        }

//        if(qstrncmp(cp, "cmp",3)){
//            Statement *stat = new DeclIntStmt();
//            stat->compile();
//            statArray.append(stat->getObj());
//            continue;
//        }

//        if(qstrncmp(cp, "prt",3)){
//            Statement *stat = new DeclIntStmt();
//            stat->compile();
//            statArray.append(stat->getObj());
//            continue;
//        }

//        if(qstrncmp(cp, "jmp",3)){
//            Statement *stat = new DeclIntStmt();
//            stat->compile();
//            statArray.append(stat->getObj());
//            continue;
//        }

//        if(qstrncmp(cp, "jmr",3)){
//            Statement *stat = new DeclIntStmt();
//            stat->compile();
//            statArray.append(stat->getObj());
//            continue;
//        }


        if(qstrncmp(cp, "end", 3) == 0){
            qDebug() << "?????" << endl;
            QMessageBox::warning(nullptr, "Done", "Compile Success!");
            break;
        }

        in.readLine();
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

    qDebug() <<programObj;
    qDebug() << "WTF";
}

//print out the program
void Program::print(){}

//change the program's name
void Program::setFileName(QString fileName){}

//get fileName
QString Program::getFileName(){return this->fileName;}

int Program::getComparisonFlag(){return this->comparisonFlag;}
