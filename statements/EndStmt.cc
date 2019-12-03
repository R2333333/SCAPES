#include "../headerFiles/EndStmt.h"
using namespace std;

EndStmt::EndStmt(){}

void EndStmt::compile(QString stat){

    instruction = stat;

    statementObj["Instruction"] = instruction;
}

void EndStmt::run(){};
