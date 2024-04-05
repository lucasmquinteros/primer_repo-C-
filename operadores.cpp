#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

float peso = 0, altura = 0;

float resultado;

 cout << "ingrese su peso en kg:" ;

 cin >> peso;

 cout << "ingrese su altura en m:";

 cin >> altura;

 resultado = peso / (altura * altura) ;


 cout << "El imc es: " << setprecision(4) <<resultado;


  return 0;
}
