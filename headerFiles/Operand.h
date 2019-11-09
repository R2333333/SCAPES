#ifndef OPERAND_H
#define OPERAND_H
#include "Identifier.h"
#include <QSstring>

class Operand{
  public:
    Operand(QString = NULL);
    ~Operand();
    Identifier GetIdent();
  private:
    Identifier idertifier;
    QString name;
};
#endif
