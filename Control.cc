#include "Control.h"

Control::Control(){

}

Control::~Control(){

}

void Control::launch(){
  int menuselection;
  string filename;
  while(1){
    menuselection = view.menu();
    cout << endl;
    if(menuselection == 1){
      cout << "Please enter the filename to create: " << endl;
      getline(cin,filename);
      manage.create(filename);
    }else if(menuselection == 2){
      cout << "Please enter the name of the file to open: " << endl;
      getline(cin,filename);
      manage.open(filename);
    }else if(menuselection == 3){
      cout << "Please enter the name of the file to compile: " << endl;
      getline(cin,filename);
      manage.compile(filename);
    }else if(menuselection == 4){
      cout << "Please enter the filename to run: " << endl;
      getline(cin,filename);
      manage.run(filename);
    }else if(menuselection == 5){
      manage.changepref();
    }else{
      cout << "Exiting......" << endl;
    }
    break;
  }
}
