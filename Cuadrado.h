#pragma once

#include "Figura.h"

class Cuadrado : public Figura{
private:
  double base;
  double altura;
public:
  Cuadrado();
  //recibe solo un double porque la base y la altura van a ser igual
  Cuadrado(string, double);
  string toString();
  double Area();

  virtual ~Cuadrado();

};
