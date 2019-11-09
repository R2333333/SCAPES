#ifndef OPERAND_H
#define OPERAND_H
#include "Identifier.h"
#include <QSstring>

class Operand{
  public:
    Operand();
    ~Operand();
    void SetOperandName(QString);
    Identifier GetIdent();
  private:
    Identifier idertifier;
    QString name;
};
#endif
