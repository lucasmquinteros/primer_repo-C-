#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main(){

 float peso=0;
 float altura=0;
 float imc;

 cout<< "ingrese su peso";
 cin >>peso;

 cout<< "ingrese su altura";
 cin>>altura;

 imc = peso / pow(altura, 2);

 cout<< "Su imc es:";
 cout<< imc;

 if(imc < 18.5){
    cout <<"peso insuficiente";
 }
 else if(imc >= 18.5 && imc < 24.9){

    cout<<"peso saludable";
 }
 else if(imc >= 24.9 && imc < 29.9){

    cout<<"sobrepeso";
 }
 else if(imc >= 29.9){
    cout<<"obesidad";
 }





return 0;
}
