#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int EP, EA, EAN, EM;

int main(int argc, char** argv) {
	
	cout << "Escriba la edad de Pedro: ";
	cin >> EP;
	EA=(EP*2)/3;
	cout<< "\nla edad de alberto es: "<< EA;
	EAN=(EP*4)/3;
	cout<<"\nLa edad de Ana es: "<< EAN;
	EM=EP+EA+EAN;
	cout<<"\nla edad de la madre es: "<< EM;
	
	
	
	return 0;
}