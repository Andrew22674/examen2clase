#include "Figura.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Double.h"


#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sys/stat.h>
#include <sstream>
#include <cstdlib>
#include <string.h>


using namespace std;

void guardar(Figura** figuras);
void leer(vector<string>);

int main(){
  int opcion = 0;
  vector<string> lineas;
  int size = 10; //tamano del arreglo dinamico
  Figura** figuras = new Figura*[size];


  while(opcion != 4){
    cout << "MENU" << endl <<
    "1. Area" << endl <<
    "2. Clase Double" << endl <<
    "3. Leer" << endl <<
    "4. Salir" << endl;

    cin >> opcion;

    if(opcion == 1){
      for (int i = 0; i != size; ++i){
        cout << "Ingrese figura" << endl;
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
      guardar(figuras);

    }else if(opcion == 2){
      //en el constructor, se le asigna 7 al valor que esta dentro de la clase Double
      Double* d1= new Double();
      //Double d2;

      double x;
      double a = 2.00;


      x = *d1 + a;

      cout << endl << "Suma " << endl << "x: " << x << endl;

      x = *d1 - a;

      cout << "Resta " << endl << "x: " << x << endl;

      cout << endl;

    }else if(opcion == 3){//leer figuras
      ifstream file("./Figuras/Figuras.txt");

      cout << endl;
      string linea;
      while (getline(file, linea)){//se agrega una linea al vector de strings hasta que ya no hayan lineas
        lineas.push_back(linea);
      }
      leer(lineas);
      cout << endl;

    }
  }

  for (int i = 0; i <= size ; ++i){
    delete figuras[i];
  }
  delete[] figuras;

  return 0;
}

void guardar(Figura** figuras){
  ofstream outfile;
  char filename[256] = {0};
  try{
    const int directorio = system("mkdir -p ./Figuras");//-p es para crear directorio solo si no existe
  } catch (...) {

  }

  strcpy(filename, "./Figuras/Figuras.txt");
  stringstream ss;

  for(int i =0; i<10 ; i++){
    ss << "El " << figuras[i] -> toString() << " tiene area: " << figuras[i] -> Area() << "\n";
  }


  outfile.open(filename, std::ios::app); //app es para append
  outfile << ss.str();
  outfile.close();
}

void leer(vector<string> lineas){

  for(int i =0;i < lineas.size(); i++){
    cout << lineas[i] << endl;
  }

}
