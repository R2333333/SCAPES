#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <QString>
#include <QJsonObject>

using namespace std;

class Identifier{
  public:
          Identifier(QString=nullptr);
          virtual QString getName();
          virtual void setValue(int){}
          virtual QString getType(){return "identifier";}
          virtual void addArrElement(int){}

  protected:
          QString name;

};

#endif
