#pragma once

#include "Figura.h"

class Circulo : public Figura{
private:
  double radio;

public:
  Circulo();
  Circulo(string, double);


  virtual ~Circulo();
};
