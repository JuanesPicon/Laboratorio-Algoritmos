#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float m,n,c,fac1,fac2,fac3;

float factorial(float x){
	float fac=1;
	int i=2;
	while (i<=x){
		fac= fac*i;
		i=i+1;
	}
	
return fac;
}


int main(int argc, char** argv) {

cout<<"m: ";
cin>> m;
cout<<"n: ";
cin>> n;

fac1=factorial(m);
fac2=factorial(n);
fac3=factorial(m-n);
c=fac1/(fac2*fac3);
cout<<"la combinatoria es: "<<c;

	return 0;
}
