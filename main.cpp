#include "Figura.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Double.h"


#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
  string opcion = "x";
  vector<string> lineas;
  int size = 10; //tamano del arreglo dinamico
  Figura** figuras = new Figura*[size];
  for (int i = 0; i != size; ++i){
    cout << "a. Cuadrado" << endl <<
    "b. Circulo" << endl;

    string cua_cir; //cuadrado o circulo
    cin >> cua_cir;

    if(cua_cir == "a" || cua_cir == "A"){//si la opcion que ingresa el usuario es "a" se guarda un circulo en la posicion "i" del arreglo
      figuras[i] = new Cuadrado();
    }else{//sino se guarda un circulo
      figuras[i] = new Circulo();
    }
  }

  while(opcion != "d" || opcion != "D"){
    cout << "MENU" << endl <<
    "a. Area" << endl <<
    "b. Clase Double" << endl <<
    "c. Leer" << endl;

    cin >> opcion;

    if(opcion == "a" || opcion == "A"){

      Circulo circulo;
      Cuadrado cuadrado;


    }else if(opcion == "b" || opcion == "B"){
      //en el constructor, se le asigna 7 al valor que esta dentro de la clase Double
      Double d1;
      Double d2;

      double x;

      x = d1 + d2;

      cout << "x: " << x << endl;
    }else if(opcion == "c" || opcion == "C"){

    }
  }

  for (int i = 0; i <= size ; ++i){}
    delete figuras[i];
  }
  delete[] figuras;
  return 0;
}
