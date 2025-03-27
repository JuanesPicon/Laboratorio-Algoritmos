#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

int CT, i, res, NT;

cout<<"Terminos: ";
cin >>CT;
cout<<"Tabla del numero que desea ver: ";
cin >>NT;
i=1;
while (i<=CT)
{
	
	res=i*NT;
cout<<i<<" *"<<NT<<"="<< res <<"\n";
	i=i+1;
	
}
	return 0;
}
