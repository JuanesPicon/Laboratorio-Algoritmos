#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int num;

int main(int argc, char** argv) {
	
cout<< "Numero (1,5): ";
cin>> num;

switch (num){
	case 1: cout<< "Equivale a I";
	break;
	case 2: cout<< "Equivale a II";
	break;
	case 3: cout<< "Equivale a III";
	break;
	case 4: cout<< "Equivale a IV";
	break;
	case 5: cout<< "Equivale a V";
	break;
	default: cout<<"Error";
}
	
	
	return 0;
}