#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <QString>
#include <QJsonObject>

using namespace std;

class Identifier{
  public:
          Identifier(QString=nullptr);
          virtual QString getName();

  protected:
          QString name;

};

#endif
