#include "headerFiles/Label.h"

Label::Label(QString n, int l){

//    if (checkError(n)){
//        return;
//    }
    QString firstStat = "";
    bool start = false;
    for(QChar c: n){
        if(c == ':'){
            continue;
        }

        if (c == ' ' && !start){
            start = true;
            continue;
        }

        if (start){
            restStat += c;
        }else{
            firstStat += c;
        }
    }

    name = firstStat;
    line = l;
    identifierObj["Label"] = name;
    identifierObj["LineNo."] = line;
}

void Label::setLine(int num){
  line = num;
}

int Label::getLine(){
  return line;
}

QString Label::getIns(){
    return restStat;
}

QString Label::getErrorMes(){
    return errorMes;
}

bool Label::checkError(QString n){
    QRegExp separator("[(:| |)]");
    QStringList list = n.split(separator);



        if(list.count() <= 2){
            errorMes = "No instruction after label in line %1, fail to compile!!!";
            error = true; return error;
        }

//        if(list.at(2) == "dci"){
//            if(list.count() < 4){
//                errorMes = "Too few arguments in dci in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 4){
//                errorMes = "Too many arguments in dci in line %1, fail to compile!!!";
//                error = true; return error;
//            }

//        }else if(list.at(2) == "dca"){
//            if(list.count() < 5){
//                errorMes = "Too few arguments in dca in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 5){
//                errorMes = "Too many arguments in dca in line %1, fail to compile!!!";
//                error = true; return error;
//            }

//        }else if(list.at(2) == "rdi"){
//            if(list.count() < 4){
//                errorMes = "Too few arguments in rdi in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 4){
//                errorMes = ("Too many arguments in rdi in line %1, fail to compile!!!");
//                error = true; return error;
//            }

//        }else if(list.at(2) == "prt"){
//            if(list.count() < 4){
//                errorMes = "Too few arguments in prt in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 4){
//                errorMes = "Too many arguments in prt in line %1, fail to compile!!!";
//                error = true; return error;
//            }

//        }else if(list.at(2) == "mov"){
//            if(list.count() < 5){
//                errorMes = "Too few arguments in mov in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 5){
//                errorMes = "Too many arguments in mov in line %1, fail to compile!!!";
//                error = true; return error;
//            }

//        }else if(list.at(2) == "add"){
//            if(list.count() < 5){
//                errorMes = "Too few arguments in add in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 5){
//                errorMes = "Too many arguments in add in line %1, fail to compile!!!";
//                error = true; return error;
//            }

//        }else if(list.at(2) == "cmp"){
//            if(list.count() < 5){
//                errorMes = "Too few arguments in cmp in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 5){
//                errorMes = "Too many arguments in cmp in line %1, fail to compile!!!";
//                error = true; return error;
//            }

//        }else if(list.at(2) == "jls"){
//            if(list.count() < 4){
//                errorMes = "Too few arguments in jls in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 4){
//                errorMes = "Too many arguments in jls in line %1, fail to compile!!!";
//                error = true; return error;
//            }

//        }else if(list.at(2) == "jmr"){
//            if(list.count() < 4){
//                errorMes = "Too few arguments in jmr in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 4){
//                errorMes = "Too many arguments in jmr in line %1, fail to compile!!!";
//                error = true; return error;
//            }

//        }else if(list.at(2) == "jeq"){
//            if(list.count() < 4){
//                errorMes = "Too few arguments in jeq in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 4){
//                errorMes = "Too many arguments in jeq in line %1, fail to compile!!!";
//                error = true; return error;
//            }

//        }else if(list.at(2) == "jmp"){
//            if(list.count() < 4){
//                errorMes = "Too few arguments in jmp in line %1, fail to compile!!!";
//                error = true; return error;
//            }else if(list.count() > 4){
//                errorMes = "Too many arguments in jmp in line %1, fail to compile!!!";
//                return  true;
//            }

//        }else if (list.at(2) == "end") {
//            if(list.count() != 3){
//                errorMes = "Too many arguments in end in line %1, fail to compile!!!";
//                error = true; return error;
//            }

//        }else{ //incorrect instruction
//            errorMes = "Unknown instruction in line %1, fail to compile!!!";
//            error = true; return error;
//        }

        return error;

}

//Label::~Label(){}
