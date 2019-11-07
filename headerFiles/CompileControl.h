#ifndef COMPILECONTROL_H
#define COMPILECONTROL_H
#include "Repository.h"
#include "Program.h"
#include <string>
using namespace std;

class CompileControl{
  public:
	  CompileControl(string filePath, string outPutName);
	  void compile();
	  void storePgm();

  private:

	  Repository repository;
	  Program *program;
	  string filePath;
	  string outPutName;
};
#endif
