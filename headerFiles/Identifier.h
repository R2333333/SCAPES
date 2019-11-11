#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <QString>
#include <QJsonObject>

using namespace std;

class Identifier{
  public:

          Identifier(QString=nullptr);
          QJsonObject getObj(){return identifierObj;}
          virtual QString getName();

  private:
          QString name;
          QJsonObject identifierObj;

};

#endif
