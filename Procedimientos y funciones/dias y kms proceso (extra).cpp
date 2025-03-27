#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float kms, dias, Valorpagar;

void vpagar(){
	if (kms>1000 && dias>5){
		Valorpagar=((kms*89)*0.70)*2;
	} else {
		Valorpagar=(kms*89)*2;
	}
printf("el valor a pagar es: %.2f", Valorpagar);
	
}


int main(int argc, char** argv) {

printf("escriba la distancia en km: ");
scanf("%f",&kms);
printf("numeros de dias de alojamiento: ");
scanf("%f", &dias);
vpagar();


	return 0;
}
