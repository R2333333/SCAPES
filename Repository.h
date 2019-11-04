#ifndef REPOSITORY_H
#define REPOSITORY_H
#include "File.h"
#include <string>
#include <iostream>
using namespace std;

#define SIZE 512

class Repository{
  public:
    Repository();
    ~Repository();
    void addfile(File*);
    void deletefile(File*);
    int getNumFiles();
    void printfiles();

  private:
    File* elements[SIZE];
    int size;
};

#endif
