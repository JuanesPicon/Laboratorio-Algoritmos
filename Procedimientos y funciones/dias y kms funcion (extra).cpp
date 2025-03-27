#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float kms, dias, Valorpagar;

float valpagar(float kms, float dias){
	float vpagar;
	
	if (kms>1000 && dias>5){
		vpagar=((kms*89)*0.70)*2;
	} else {
		vpagar=(kms*89)*2;
	}
return vpagar;
	
}


int main(int argc, char** argv) {

printf("escriba la distancia en km: ");
scanf("%f",&kms);
printf("numeros de dias de alojamiento: ");
scanf("%f", &dias);
Valorpagar=valpagar(kms,dias);
printf("el valor total a pagar es: %f", Valorpagar);


	return 0;
}
