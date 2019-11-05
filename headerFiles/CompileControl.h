#ifndef COMPILECONTROL
#define COMPILECONTROL
#include "Repository.h"
#include "Program.h"
#include <string>
using namespace std;

public class CompileControl{
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
