#include <iostream>
#include <iomanip>
#include <QDebug>

using namespace std;

#include "../headerFiles/Statement.h"

Statement::Statement(){}

//Statement::~Statement(){
//  delete operand1;
//  delete operand2;
//}

void Statement::setObj(QJsonValue obj, Program* p){
    //qDebug() << obj.toObject() << "???";
    QJsonObject oobj = obj.toObject();
    //qDebug() << oobj["Operand1"] << endl;
    if(!oobj["Operand1"].isNull()){
        //qDebug() << oobj["Operand1"].toString() << "!!!";
        operand1 = new Operand(oobj["Operand1"].toString());
    }

    if(!oobj["Operand2"].isNull()){
        operand2 = new Operand(oobj["Operand2"].toString());
    }

    program = p;
}

bool Statement::checkNum(QString s){
    bool isNumeric1 = true;

    for (QChar c : s){ //input1 is an integer
        if (!c.isNumber()){
            isNumeric1 = false;
        }
    }
    return isNumeric1;
}

QJsonObject Statement::getObj(){
  return statementObj;
}

QString Statement::getInstruction(){
  return instruction;
}

QString Statement::getFirstOperand(){
  return operand1->getIdent()->getName();
}

QString Statement::getSecondOperand(){
  return operand2->getIdent()->getName();
}

bool Statement::checkError(QString s){

            QRegExp separator("[(:| |)]");
            QStringList list = s.split(separator);

            if(s.isEmpty()){
                return false;
            }


            if(list.count() > 1){ // The line with at least two words
                if(s.contains(":")){ //incorrect format with ":" position
                    if(list.at(1) != ""){
                        errorMes = "Incorrect ':' position in line %1, fail to compile!!!";
                        error = true;;
                    }
                }

                    if(list.at(0) == "dci"){
                        if(list.count() < 2){
                            errorMes = "Too few arguments in dci in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 2){
                            errorMes = "Too many arguments in dci in line %1, fail to compile!!!";
                            error = true; return error;;
                        }

                    }else if(list.at(0) == "dca"){
                        if(list.count() < 3){
                            errorMes = "Too few arguments in dca in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 3){
                            errorMes = "Too many arguments in dca in line %1, fail to compile!!!";
                            error = true; return error;;
                        }

                    }else if(list.at(0) == "rdi"){
                        if(list.count() < 2){
                            errorMes = "Too few arguments in rdi in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 2){
                            errorMes = "Too many arguments in rdi in line %1, fail to compile!!!";
                            error = true; return error;;
                        }

                    }else if(list.at(0) == "prt"){
                        if(list.count() < 2){
                            errorMes = "Too few arguments in prt in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 2){
                            errorMes = "Too many arguments in prt in line %1, fail to compile!!!";
                            error = true; return error;;
                        }

                    }else if(list.at(0) == "mov"){
                        if(list.count() < 3){
                            errorMes = "Too few arguments in mov in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 3){
                            errorMes = "Too many arguments in mov in line %1, fail to compile!!!";
                            error = true; return error;;
                        }

                    }else if(list.at(0) == "add"){
                        if(list.count() < 3){
                            errorMes = "Too few arguments in add in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 3){
                            errorMes = "Too many arguments in add in line %1, fail to compile!!!";
                            error = true; return error;;
                        }

                    }else if(list.at(0) == "cmp"){
                        if(list.count() < 3){
                            errorMes = "Too few arguments in cmp in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 3){
                            errorMes = "Too many arguments in cmp in line %1, fail to compile!!!";
                            error = true; return error;;
                        }

                    }else if(list.at(0) == "jls"){
                        if(list.count() < 2){
                            errorMes = "Too few arguments in jls in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 2){
                            errorMes = "Too many arguments in jls in line %1, fail to compile!!!";
                            error = true; return error;;
                        }

                    }else if(list.at(0) == "jmr"){
                        if(list.count() < 2){
                            errorMes = "Too few arguments in jmr in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 2){
                            errorMes = "Too many arguments in jmr in line %1, fail to compile!!!";
                            error = true; return error;;
                        }

                    }else if(list.at(0) == "jeq"){
                        if(list.count() < 2){
                            errorMes = "Too few arguments in jeq in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 2){
                            errorMes = "Too many arguments in jeq in line %1, fail to compile!!!";
                            error = true; return error;;
                        }

                    }else if(list.at(0) == "jmp"){
                        if(list.count() < 2){
                            errorMes = "Too few arguments in jmp in line %1, fail to compile!!!";
                            error = true; return error;;
                        }else if(list.count() > 2){
                            errorMes = "Too many arguments in jmp in line %1, fail to compile!!!";
                            error = true; return error;;
                        }
                    }else{ //incorrect instruction
                        errorMes = "Unknown instruction in line %1, fail to compile!!!";
                        error = true; return error;;
                    }

            }else{ //The line with only one word
                if(list.at(0) == "end"){

                    return false;
                }else{
                    errorMes = "Unknown statement in line %1, fail to compile!!!";
                    error = true; return error;;
                }
            }


    return error;
}

QString Statement::getErrorMes(){
    return errorMes;
}
