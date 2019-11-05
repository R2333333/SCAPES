#ifndef PROGRAM_M
#define PROGRAM_M
#include "Statement.h"
#include "Identifier.h"
#include <string>

class Program{
  public:
	  Program(std::string);
	  void compile();
	  void print();
	  void setFileName(std::string);
	  std::string getFileName();
	  int getComparisonFlag();

  private:
	  std::string fileName;
	  int comparisonFlag;
	  Identifier **identifier;
	  Statement **statement;
};
#endif
