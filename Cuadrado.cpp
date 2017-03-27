#include "Cuadrado.h"

Cuadrado::Cuadrado(){
  nombre = "Cuadrado";
  base = 10;
  altura = 10;
}

//recibe solo un double porque la base y la altura van a ser igual
Cuadrado::Cuadrado(string nombre, double base) : Figura(nombre){
  this -> base = base;
  altura = base;
}

string Cuadrado::toString(){
  return "Cuadrado";
}

//area de cuadrado es igual a base*base o base*altura
double Cuadrado::Area(){
  return base * altura;
}

Cuadrado::~Cuadrado(){

}
