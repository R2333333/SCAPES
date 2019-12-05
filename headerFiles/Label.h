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
    //void setArrElement(int,int){}
    QString getIns();
    Label(QString, int);
    bool checkError(QString);
    QString getErrorMes();
    int getLine();
    //void setArr(int){}
    //~Label();

  private:
    int line;
    QString restStat = "";
    bool error=false;
    QString errorMes = NULL;
};
#endif
