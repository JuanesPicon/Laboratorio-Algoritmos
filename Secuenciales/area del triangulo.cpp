#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float base, altura, area;

int main(int argc, char** argv) {
	
	cout<<"Escriba la base: ";
	cin>>base;
	cout<<endl<<"Escriba la altura: ";
	cin>>altura;
	area=base*altura;
	cout<<"\nEl area del triangulo es: "<<area;
	
	
	
	return 0;
}