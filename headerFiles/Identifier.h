#ifndef IDENTIFIER_H
#define IDENTIFIER_H
#include <QString>

using namespace std;

class Identifier{
  public:
          Identifier(QString = "");
          ~Identifier();
          QString GetName();
  protected:
          QString name;
};

#endif
