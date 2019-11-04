#ifndef STATEMENT_H
#define STATEMENT_H
#include <string>
#include "Label.h"
#include "Operand.h"

using namespace std;

class Statement{

  public:
	virtual void compile(string *instr) = 0;
	virtual void run() = 0;
  protected:
	Operand *operand1, *operand2;
	Label label;
};

#endif
