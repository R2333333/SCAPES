#include "headerFiles/Program.h"
#include <QDebug>
#include <iterator>

using namespace std;

Program::Program(QString fileName){
    this->fileName = fileName;
}

//compile each statement
//Program::~Program(){
//  delete identifier;
//  delete stat;
//  //qDebug() << "Program destructor" << endl;
//}

QMap<QString, Variable*>* Program::getVMap(){
    return varibleMap;
}

void Program::compile(){

    int lineCount = 0;
    QFile inputFile(getFileName());
    QJsonArray statArray;
    QJsonArray labelArray;

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
           Label *l = new Label(s, lineCount); if (l->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(l->getErrorMes()).arg(lineCount)); return;}
           labelArray.append(l->getObj());
           s = l->getIns();
        }

        if (s.startsWith("dci")){
            stat = new DeclIntStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("dca")){
            stat = new DeclArrStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("rdi")){
            stat = new ReadStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("prt")){
            stat = new PrintStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("mov")){
            stat = new MoveStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("add")){
            stat = new AddStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("cmp")){
            stat = new CompStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("jls")){
            stat = new JLessStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("jmr")){
            stat = new JMoreStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("jeq")){stat->compile(s);
            stat = new JEqStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("jmp")){
            stat = new JumpStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
        }

        if (s.startsWith("end")){
            stat = new EndStmt();
            stat->compile(s); if (stat->getErrorMes() != NULL) {QMessageBox::warning(nullptr, "Error", QString(stat->getErrorMes()).arg(lineCount)); return;}
            statArray.append(stat->getObj());
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
    programObj["labels"] = labelArray;

    qDebug() << endl << programObj << endl;
    //qDebug() << "WTF" << endl;


}

void Program::run(){
    QFile inputFile(getFileName());
    inputFile.open(QFile::ReadOnly);
    QTextStream in(&inputFile);
    QJsonDocument doc =QJsonDocument::fromJson(in.readAll().toUtf8());
    QJsonObject obj = doc.object();
    varibleMap = new QMap<QString, Variable*>;
    //qDebug() << in.readAll();
    //qDebug() << obj["labels"].toString();
    foreach (const QJsonValue &value, obj["labels"].toArray()){
        //qDebug() << value.toString();
        labelMap.insert(value["Label"].toString(), new Label(value["Label"].toString(), value["LineNo."].toInt()));
    }

    foreach (const QJsonValue &value, obj["statements"].toArray()){
        if(value["Instruction"].toString().compare("dci") == 0){

            Statement *s = new DeclIntStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("dca") == 0){
            Statement *s = new DeclArrStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("rdi") == 0){
            Statement *s = new ReadStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("prt") == 0){
            Statement *s = new PrintStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("mov") == 0){
            Statement *s = new MoveStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("add") == 0){
            Statement *s = new AddStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("cmp") == 0){
            Statement *s = new CompStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("jls") == 0){
            Statement *s = new JLessStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("jmr") == 0){
            Statement *s = new JMoreStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("jeq") == 0){
            Statement *s = new JEqStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("jmp") == 0){
            Statement *s = new JumpStmt();
            s->setObj(value, this);
            s->run();
        }

        if(value["Instruction"].toString().compare("end") == 0){
            Statement *s = new EndStmt();
            s->setObj(value, this);
            s->run();
        }
    }
}

    //qDebug() << labelMap.find("L1").value()->getLine();
    //qDebug() << varibleMap->find("a").key();
    //qDebug() << varibleMap->find("a").value()->getType();
    //qDebug() << varibleMap->find("a").value()->getArrSize();
    //varibleMap->find("a").value()->print();



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
