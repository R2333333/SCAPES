#include "View.h"
#include <string>
#include <iostream>

int View::menu(){
  cout << endl;
  cout << "System menu: " << endl;
  cout << "(1) Create A Program" << endl;
  cout << "(2) Open A Program" << endl;
  cout << "(3) Compile A Program" << endl;
  cout << "(4) Run A Program" << endl;
  cout << "(5) Manage System Preference" << endl;
  cout << "(6) Exit System" << endl;

  int selection = 0;

  while(selection < 1 || selection > 6){
    cout << endl << "Please Enter Your Selection: (single number)" << endl << endl;
    cin >> selection;
  }

  return selection;
}
