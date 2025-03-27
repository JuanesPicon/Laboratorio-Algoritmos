#include <iostream>
using namespace std;

float num;

int main(int argc, char** argv) {
	cout<< "Numero a evaluar: ";
	cin>> num;
	
	if (num==0){
		cout<< "El numero es 0";
	}else if (num<0){
		cout<< "El numero es negativo";
	}else{
		cout<< "El numero es positivo";
	}



	
	return 0;
	
}