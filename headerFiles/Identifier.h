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
          //void setName(QString);
          virtual void setValue(int){}
          virtual QString getType(){return "identifier";}
          //virtual void setArr(int);
          virtual void addArrElement(int){}
          //virtual void setArrElement(int,int){}

  protected:
          QJsonObject identifierObj;
          QString name;

};

#endif
