#pragma once

class Double{
private:
  double valor;

public:
  Double();
  Double(double);

  double getValor();

//recibe un objeto Double y retorna un double
double operator+(Double* valor){
    return this -> valor + valor -> getValor();
}

double operator+(double valor){
  return this -> valor + valor;
}


//recibe objeto Double y retorna double
double operator-(Double* valor){
  return this -> valor - valor -> getValor();
}

double operator-(double valor){
  return this -> valor - valor;
}



virtual ~Double();
};
