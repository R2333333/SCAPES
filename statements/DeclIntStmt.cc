#include <iostream>
using namespace std;
#include <qstring.h>

#include "../headerFiles/DeclIntStmt.h"

DeclIntStmt::DeclIntStmt(string inst, string op1)
    :Statement(inst, op1){}

void DeclIntStmt::compile(string op1){

}
