#ifndef MANAGE_H
#define MANAGE_H
#include "Repository.h"
#include "Instruction.h"
#include "Setting.h"
#include <string>
#include <iostream>

class Manage{
  public:
    void create(string&);
    void open(string&);
    void compile(string&);
    void run(string&);
    void changepref();
    void save(string&, string&);

};

#endif
