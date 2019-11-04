#ifndef FILE_H
#define FILE_H

#include <string>
#include <iostream>
using namespace std;

class File{
  public:
    File();
    ~File();
    string gettype();
    int getsize();
    void printcontent();

  private:
    string type;
    int size;

};

#endif
