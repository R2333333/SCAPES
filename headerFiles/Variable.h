#ifndef VARIABLE_H
#define VARIABLE_H

#include "Identifier.h"
#include <iostream>
#include <QString>

class Variable : public Identifier{
  public:
    Variable(QString, int, QString);
    void setValue(int);
    void setArr(int);
    void setType(QString);
    void addArrElement(int);
    int getArrSize();
    QString getType();
    int getValue();
    void print();

  private:
    int *arr;
    int arrsize = 0;
    int value;
    QString type;
};
#endif
