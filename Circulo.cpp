Circulo::Circulo(){
  nombre = "Circulo";
  radio = 5;
}

Circulo::Circulo(string nombre, double radio) : Figura(nombre){
  this -> radio = radio;
}

string Circulo::toString(){
  return "Circulo";
}

double Circulo::Area(){
  return 3.1416 * (radio * radio);
}

Circulo::~Circulo(){
  
}
