#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int tipo;
float area;

float triangulo(){
float base, altura;
cout<<"base: ";
cin>> base;
cout<< "altura: ";
cin>> altura;
return base*altura/2;
}

float cuadrado(){
float lado;
cout<<"medida de lado: ";
cin>> lado;

return lado*lado;
}

float trapecio(){
float basemen, basemay, altura;
cout<<"medida de base mayor: ";
cin>> basemay;
cout<<"medida de base menor: ";
cin>> basemen;
cout<<"medida de altura: ";
cin>> altura;
return (basemay+basemen)*altura/2;
}



int main(int argc, char** argv) {
	cout<<"MENU AREAS"<<"\n";
	cout<<" 1. Triangulo \n 2. Cuadrado \n 3. Trapecio \n 4. salir \n OPCION: ";
	cin>> tipo;
	
	switch  (tipo) {
		
		case 1: 
		area=triangulo();
		cout<< "area es igual a: "<< area;
		break;
		
		case 2: 
		area=cuadrado();
		cout<< "area es igual a: "<< area;
		break;
		
		case 3:
		area=trapecio();
		cout<< "area es igual a: "<< area;
		break;		
		
		case 4:
		return 0;
		break;
	}


	return 0;
}
