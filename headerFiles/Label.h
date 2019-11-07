#ifndef LABEL_H
#define LABEL_H
#include "Identifier.h"
#include <string>

class Label : public Identifier{
  public:
    Label();
    ~Label();
  private:
    string name;
};
#endif
