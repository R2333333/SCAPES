#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <QString>
#include <QJsonObject>
#include <QStringList>

using namespace std;

class Identifier{
  public:
          Identifier(QString=nullptr);
          virtual ~Identifier();
          virtual QJsonObject getObj(){return identifierObj;}
          virtual QString getName();
          virtual void setValue(int){}
          virtual QString getType(){return "identifier";}
          virtual void addArrElement(int){}

  private:
          QJsonObject identifierObj;
          QString name;

};

#endif
