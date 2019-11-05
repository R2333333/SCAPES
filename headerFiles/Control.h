#ifndef CONTROL_H
#define CONTROL_H
#include "View.h"
#include "Manage.h"

class Control{
  public:
    Control();
    ~Control();
    void launch();

  private:
    View view;
    Manage manage;

};

#endif
