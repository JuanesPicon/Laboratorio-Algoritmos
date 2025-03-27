#include <iostream>
using namespace std;
float n1, n2, n3, nf, snf, nmayor, nmenor;
int n, cod, i, cp;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	float notafinal(float n1, float n2 ,float n3){
		return (n1+n2+n3)/3;
	}
	
	void salida(int cp, float sumanf, int n, float nmayor, float nmenor){
		cout<< "Perdieron: "<<cp<<endl;
		cout<< "Promedio: "<<sumanf/n<<endl;
		cout<< "Nota mayor: "<< nmayor<<endl;
		cout<< "Nota menor: "<< nmenor<<endl;
		cout<< "Porcentaje ganadores: "<<(n-cp)*100.0/n<<endl;
	}

int main(int argc, char** argv) {
	
	cout << "cantidad de estudiantes : ";
	cin>> n;
	i=1 , cp=0, snf=0, nmayor=0, nmenor=5;
	
	while (i<=n){
		cout << "Codigo: ";
		cin >> cod;
		cout << "Nota 1: ";
		cin >> n1;
		cout << "Nota 2: ";
		cin>> n2;
		cout << "Nota 3: ";
		cin>> n3;
		nf = notafinal(n1,n2,n3);
		cout << "Nota final: "<<nf<<endl;
		snf=snf+nf;
		if (nf<3){
			cp=cp+1;
		}
		if (nf>nmayor){
			nmayor=nf;
		}
		if (nf<nmenor){
		    nmenor = nf;
		}
		i=i+1;
	}
	
	salida(cp, snf, n, nmayor, nmenor);
	return 0;
}