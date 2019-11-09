#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <string>
#include <QJsonObject>

using namespace std;

class Identifier{
  public:
          Identifier(string=NULL);
          QJsonObject getObj(){return identifierObj;}

  private:
          string name;
          QJsonObject identifierObj;

};

#endif
