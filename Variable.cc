#include "headerFiles/Variable.h"
#include <QDebug>

Variable::Variable(QString name, int val, QString type)
    :Identifier(name)
{
    setValue(val);
    setType(type);
}

void Variable::setValue(int val){
  value = val;
}

void Variable::setType(QString name){
  type = name;
}

QString Variable::getType(){
  return type;
}

void Variable::setArr(int max){
  arr = new int[max];
}

void Variable::addArrElement(int value){
  arr[arrsize] = value;
  arrsize += 1;
}

void Variable::setArrElement(int index, int value){
    arr[index] = value;
}

int Variable::getArrElement(int index){
    return arr[index];
}

int Variable::getArrSize(){
  return arrsize;
}

int Variable::getValue(){
  return value;
}

void Variable::print(){
  for(int i = 0; i < arrsize; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
