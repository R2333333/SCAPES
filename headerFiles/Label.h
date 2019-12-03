#ifndef LABEL_H
#define LABEL_H
#include "Identifier.h"
#include <QString>

class Label : public Identifier{
  public:
    void setLine(int);
    void setValue(int){}
    QString getType(){return "Label";}
    void addArrElement(int){}
    QString getIns();
    Label(QString, int);
    int getLine();
    //~Label();

  private:
    int line;
    QString restStat = "";
};
#endif
