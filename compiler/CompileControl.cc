#include "../headerFiles/CompileControl.h"
using namespace std;

CompileControl::CompileControl(string filePath, string outPutName){
  this.filePath = filePath;
  this.outPutName = outPutName;
  program = new Program();
}

~CompileControl::CompileControl(){
  delete program;
}

//compile program by calling the compile function of Program object
void CompileControl::compile(){
  program->compile(filePath);
}

void CompileControl::storePgm(){
  repository.store(outPutName);
}
