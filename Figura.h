#pragma once

#include <iostream>
#include <string>

using namespace std;

class Figura{
protected:
  string nombre;
public:
  Figura();
  Figura(string);
  virtual string toString();
  virtual double Area();

  virtual ~Figura();
};
