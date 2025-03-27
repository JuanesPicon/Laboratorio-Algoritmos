#include <iostream>
//CHOCOLATINAS
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
float c_cacao, m, p, t, pv, costo;
int n_unidades;
string tpro;
int main(int argc, char** argv) {
	printf("tipo de producto <jumbo> <blanca> <dulce>: ");
	getline( cin, tpro );//Alfanumerico acepta espacios
	printf("Cantidad de cacao kg: ");
	scanf("%f",&c_cacao);
	if (tpro=="jumbo"){
		m=c_cacao*(0.015+0.025+0.1+1);
		p=10200*c_cacao;
		t=300*c_cacao;
		n_unidades=75*c_cacao;
	} else if (tpro=="blanca"){
		m=c_cacao*0.0035+c_cacao;
		p=8100*c_cacao;
		t=270*c_cacao;
		n_unidades=c_cacao*4/10;
		} else if(tpro=="dulce"){
			m=c_cacao*0.0035+c_cacao*0.05+c_cacao;
			p=8800*c_cacao;
			t=280*c_cacao;
			n_unidades=c_cacao*5/10;
		}
	costo=m*p/t;
	printf("costo: %.2f\n", costo);
	printf("unidades: %d\n", n_unidades);
	if (tpro=="jumbo" && costo<1300){
		pv=costo+2000;
	} else if (tpro=="jumbo" && costo>=1300){
		pv=costo+1000;
		} else if (tpro=="blanca" && costo<2500){
			pv=costo+1500;
			} else if (tpro=="blanca" && costo>=2500){
				pv=costo+500;
				} else if (tpro=="dulce" && costo<3000){
					pv=costo+3000;
					} else if (tpro=="dulce" && costo>=3000){
						pv=costo+2000;
						}
	printf("Precio de venta: %.2f", pv);
	return 0;
}
