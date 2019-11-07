#include "../headerFiles/RepositoryControl.h"
using namespace std;

void RepositoryControl::create(string fileName){
    fstream fs;
    string s = "../../repository/"+fileName;
    fs.open(s,fstream::out);
    fs.close();
}

void RepositoryControl::save(string fileName, string *buff){
    fstream fs;
    string s = "../../repository/"+fileName;
    fs.open(s,fstream::out);
    fs << *buff;
    fs.close();
}

void RepositoryControl::open(string fileName){

}

