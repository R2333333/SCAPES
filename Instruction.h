#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <string>
#include <iostream>
using namespace std;

class Instruction{
  public:
    Instruction();
    int dci();
    void rdi(int&);
    void prt();
    void cmp(int&, int&);
    void jmr(string&);
    void jmp(string&);
    void end();
    void comments();
};

#endif
