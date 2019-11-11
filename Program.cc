#include "headerFiles/Program.h"
#include <QDebug>


using namespace std;

Program::Program(QString fileName){
    this->fileName = fileName;
}

//compile each statement

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

        QRegExp separator("[(:| |)]");
        QStringList list = s.split(separator);

        if(s.isEmpty()){
            continue;
        }

        if (s.contains("#")){
            continue;
        }

        if(list.count() > 1){ // The line with at least two words
            if(s.contains(":")){ //incorrect format with ":" position
                if(list.at(1) != ""){
                    QMessageBox::warning(nullptr, "Error", QString("Incorrect ':' position in line %1, fail to compile!!!").arg(lineCount));
                    break;
                }
            }
            if(list.at(1) == ""){ //have label

                if(list.count() == 2){
                    QMessageBox::warning(nullptr, "Error", QString("No instruction after label in line %1, fail to compile!!!").arg(lineCount));
                    break;
                }

                if(list.at(2) == "dci"){
                    if(list.count() < 4){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in dci in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 4){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in dci in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new DeclIntStmt(list.at(0), list.at(2), list.at(3), nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    QJsonObject identifier;
                    identifier["LineNO.:"] = lineCount;
                    identifier["Label:"] = list.at(0);
                    identArray.append(identifier);
                    continue;
                }else if(list.at(2) == "rdi"){
                    if(list.count() < 4){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in rdi in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 4){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in rdi in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new ReadStmt(list.at(0), list.at(2), list.at(3), nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    QJsonObject identifier;
                    identifier["LineNO.:"] = lineCount;
                    identifier["Label:"] = list.at(0);
                    identArray.append(identifier);
                    continue;
                }else if(list.at(2) == "prt"){
                    if(list.count() < 4){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in prt in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 4){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in prt in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new PrintStmt(list.at(0), list.at(2), list.at(3), nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    QJsonObject identifier;
                    identifier["LineNO.:"] = lineCount;
                    identifier["Label:"] = list.at(0);
                    identArray.append(identifier);
                    continue;
                }else if(list.at(2) == "jmr"){
                    if(list.count() < 4){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in jmr in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 4){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in jmr in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new JMoreStmt(list.at(0), list.at(2), list.at(3), nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    QJsonObject identifier;
                    identifier["LineNO.:"] = lineCount;
                    identifier["Label:"] = list.at(0);
                    identArray.append(identifier);
                    continue;
                }else if(list.at(2) == "jmp"){
                    if(list.count() < 4){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in jmp in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 4){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in jmp in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new JumpStmt(list.at(0), list.at(2), list.at(3), nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    QJsonObject identifier;
                    identifier["LineNO.:"] = lineCount;
                    identifier["Label:"] = list.at(0);
                    identArray.append(identifier);
                    continue;
                }else if (list.at(2) == "cmp") {
                    if(list.count() < 5){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in cmp in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 5){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in cmp in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new CompStmt(list.at(0), list.at(2), list.at(3), list.at(4));
                    stat->compile();
                    statArray.append(stat->getObj());
                    QJsonObject identifier;
                    identifier["LineNO.:"] = lineCount;
                    identifier["Label:"] = list.at(0);
                    identArray.append(identifier);
                    continue;
                }else if (list.at(2) == "end") {
                    if(list.count() != 3){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in end in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new EndStmt(list.at(0), list.at(2), nullptr, nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    QJsonObject identifier;
                    identifier["LineNO.:"] = lineCount;
                    identifier["Label:"] = list.at(0);
                    identArray.append(identifier);
                    QMessageBox::warning(nullptr, "Done", "Compile Success!");
                    break;
                }else{ //incorrect instruction
                    QMessageBox::warning(nullptr, "Error", QString("Unknown instruction in line %1, fail to compile!!!").arg(lineCount));
                    break;
                }
            }else{ //no label
                if(list.at(0) == "dci"){
                    if(list.count() < 2){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in dci in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 2){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in dci in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new DeclIntStmt(nullptr, list.at(0), list.at(1), nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    continue;
                }else if(list.at(0) == "rdi"){
                    if(list.count() < 2){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in rdi in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 2){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in rdi in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new ReadStmt(nullptr, list.at(0), list.at(1), nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    continue;
                }else if(list.at(0) == "prt"){
                    if(list.count() < 2){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in prt in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 2){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in prt in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new PrintStmt(nullptr, list.at(0), list.at(1), nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    continue;
                }else if(list.at(0) == "jmr"){
                    if(list.count() < 2){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in jmr in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 2){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in jmr in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new JMoreStmt(nullptr, list.at(0), list.at(1), nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    continue;
                }else if(list.at(0) == "jmp"){
                    if(list.count() < 2){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in jmp in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 2){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in jmp in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new JumpStmt(nullptr, list.at(0), list.at(1), nullptr);
                    stat->compile();
                    statArray.append(stat->getObj());
                    continue;
                }else if (list.at(0) == "cmp") {
                    if(list.count() < 3){
                        QMessageBox::warning(nullptr, "Error", QString("Too few arguments in cmp in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }else if(list.count() > 3){
                        QMessageBox::warning(nullptr, "Error", QString("Too many arguments in cmp in line %1, fail to compile!!!").arg(lineCount));
                        break;
                    }
                    Statement *stat = new CompStmt(nullptr, list.at(0), list.at(1), list.at(2));
                    stat->compile();
                    statArray.append(stat->getObj());
                    continue;
                }else{ //incorrect instruction
                    QMessageBox::warning(nullptr, "Error", QString("Unknown instruction in line %1, fail to compile!!!").arg(lineCount));
                    break;
                }
            }
        }else{ //The line with only one word
            if(list.at(0) == "end"){
                Statement *stat = new EndStmt(nullptr, list.at(0), nullptr, nullptr);
                stat->compile();
                statArray.append(stat->getObj());
                QMessageBox::warning(nullptr, "Done", "Compile Success!");
                break;
            }else{
                QMessageBox::warning(nullptr, "Error", QString("Unknown statement in line %1, fail to compile!!!").arg(lineCount));
                break;
            }
        }

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
