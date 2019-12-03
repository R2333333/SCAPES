#ifndef LABEL_H
#define LABEL_H
#include "Identifier.h"
#include <QString>

class Label : public Identifier{
  public:
    Label(QString, int);
    int getLine();
    ~Label();

  private:
    int line;
};
#endif
