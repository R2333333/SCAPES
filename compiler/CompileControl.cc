#include "../headerFiles/CompileControl.h"
#include <QDebug>

using namespace std;

CompileControl::CompileControl(QString fileName, QString outPutName){
  this->filePath = fileName;
  this->outPutName = outPutName;
  program = new Program(filePath);
  qDebug() << "CompileControl constructor" << endl;
  //qDebug() << "!!!";
}

CompileControl::~CompileControl(){
  //delete program;
  qDebug() << "CompileControl destructor" << endl;
}

void CompileControl::CreatePgm(){
  program = new Program(filePath);
  qDebug() << "1111111" << endl;
}

//compile program by calling the compile function of Program object
void CompileControl::compile(){
  program->compile();
}

QJsonObject CompileControl::getQJson(){
    return program->getQjsonobj();
}

void CompileControl::storePgm(){
//  repository = new RepositoryControl();
//  repository->save(outPutName);
}
