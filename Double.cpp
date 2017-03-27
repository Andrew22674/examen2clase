#include "Double.h"

Double::Double(){
  valor = 7;
}

Double::Double(double valor){
  this -> valor = valor;
}

double Double::getValor(){
  return valor;
}

Double::~Double(){
  
}
