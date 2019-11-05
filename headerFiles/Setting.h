#ifndef SETTING_H
#define SETTING_H

#include <string>
#include <iostream>
using namespace std;

class Setting{
  public:
    Setting();
    void printCurrSetting();

  private:
    int textsize;
    string backgroundcolor;
};

#endif
