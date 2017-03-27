#pragma once

#include <string>


class Figura{
private:
  string nombre;
public:
  Figura();
  Figura(string, double);
  virtual string toString();
  virtual double Area();

  virtual ~Figura();
};
