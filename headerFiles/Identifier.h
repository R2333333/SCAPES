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

  private:
          QJsonObject identifierObj;

    protected:
          QString name;

};

#endif
