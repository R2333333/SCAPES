#ifndef REPOSITORYCONTROL_H
#define REPOSITORYCONTROL_H

#include <fstream>
#include <string>

using namespace std;

class RepositoryControl{
  public:
      void save(string,string*);
    void create(string);
    void open(string);
};
#endif
