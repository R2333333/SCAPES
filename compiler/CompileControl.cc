#include "../headerFiles/CompileControl.h"
#include <QDebug>

using namespace std;

CompileControl::CompileControl(QString fileName, QString outPutName){
  this->filePath = fileName;
  this->outPutName = outPutName;
  program = new Program(filePath);
  qDebug() << "!!!";
}

CompileControl::~CompileControl(){
  //delete program;
}

QString CompileControl::GetSource(){
    
}

void CompileControl::CreatePgm(){
  program = new Program(filePath);
}

//compile program by calling the compile function of Program object
void CompileControl::compile(){
  program->compile();
}

void CompileControl::storePgm(){
//  repository = new RepositoryControl();
//  repository->save(outPutName);
}
