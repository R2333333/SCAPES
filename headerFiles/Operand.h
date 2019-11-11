#ifndef OPERAND_H
#define OPERAND_H
#include "Identifier.h"
#include "Label.h"
#include "Variable.h"
#include <QString>

class Operand{
  public:
    Operand(QString = nullptr);
    ~Operand();
    void createIdent();
    Identifier* getIdent();
  private:
    Identifier *identifier;
    QString name;
};
#endif
