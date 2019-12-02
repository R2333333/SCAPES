#ifndef LABEL_H
#define LABEL_H
#include "Identifier.h"
#include <QString>

class Label : public Identifier{
  public:
    Label(QString);
    void setLine(int);
    int getLine();

  private:
    int line;
};
#endif
