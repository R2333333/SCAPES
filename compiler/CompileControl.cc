#include "../headerFiles/CompileControl.h"
using namespace std;

CompileControl::CompileControl(QString filePath, QString outPutName){
  this->filePath = filePath;
  this->outPutName = outPutName;
  //program = new Program(filePath);
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
//  program->compile();
}

void CompileControl::storePgm(){
//  repository = new RepositoryControl();
//  repository->save(outPutName);
}
