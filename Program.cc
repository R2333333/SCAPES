#include "headerFiles/Program.h"

using namespace std;

Program::Program(QString fileName){
    this->fileName = fileName;
}

//compile each statement
void Program::compile(){
//  for (Statement **s = statement; s != NULL; s++){
//    (*s)->compile((*s)->getInstruction());
//  }
}

//print out the program
void Program::print(){}

//change the program's name
void Program::setFileName(QString fileName){}

//get fileName
QString Program::getFileName(){return this->fileName;}

int Program::getComparisonFlag(){return this->comparisonFlag;}
