#include "Variable.h"

Variable::Variable(){}

Variable::~Variable(){}

void Variable::SetValue(int val){
  value = val;
}

int Variable::GetValue(){
  return value;
}
