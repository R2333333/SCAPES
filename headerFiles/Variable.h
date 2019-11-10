#ifndef VARIABLE_H
#define VARIABLE_H

#include "Identifier.h"
#include <QString>

class Variable : public Identifier{
  public:
    void SetValue(int);
    int GetValue();
  private:
    int value;
};
#endif
