#ifndef VARIABLE_H
#define VARIABLE_H

#include "Identifier.h"
#include <string>

class Variable : public Identifier{
  public:
    Variable();
    ~Variable();
  private:
    int variable;
};
#endif
