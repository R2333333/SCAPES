#include "../headerFiles/EndStmt.h"
#include "../headerFiles/Program.h"
using namespace std;

EndStmt::EndStmt(){}

void EndStmt::compile(QString stat){
    if (checkError(stat)){
        return;
    }

    instruction = stat;

    statementObj["Instruction"] = instruction;
}

void EndStmt::run(){
    program->setendFlag(1);
};
