#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Numero mayor y menor de una lista de 5 numeros
float num1, num2, num3, num4, num5, mayor, menor;
int main(int argc, char** argv) {

cout<< "Escriba el numero 1: ";
cin>> num1;
cout<< "Escriba el numero 2: ";
cin>> num2;
cout<< "Escriba el numero 3: ";
cin>> num3;
cout<< "Escriba el numero 4: ";
cin>> num4;
cout<< "Escriba el numero 5: ";
cin>> num5;

mayor = num1;
menor = num1;

if (num2 > mayor) mayor = num2;
if (num2 < menor) menor = num2;
if (num3 > mayor) mayor = num3;
if (num3 < menor) menor = num3;
if (num4 > mayor) mayor = num4;
if (num4 < menor) menor = num4;
if (num5 > mayor) mayor = num5;
if (num5 < menor) menor = num5;

cout<< "El numero mayor es: " << mayor<<endl;
cout<< "El numero menor es: " << menor;


	
	return 0;
}