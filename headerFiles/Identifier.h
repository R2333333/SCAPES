#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <QString>
#include <QJsonObject>

using namespace std;

class Identifier{
  public:

          Identifier(string=NULL);
          QJsonObject getObj(){return identifierObj;}

  private:
          QString name;
          QJsonObject identifierObj;

};

#endif
