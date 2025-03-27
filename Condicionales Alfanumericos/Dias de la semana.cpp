#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int num;
int main(int argc, char** argv) {
	printf("Digite un numero [1, 7]: \n");
	scanf("%d",&num);
	switch (num){
		case 1: printf("Equivale a Lunes");
		break;
		case 2: printf("Equivale a Martes");
		break;
		case 3: printf("Equivale a Miercoles");
		break;
		case 4: printf("Equivale a Jueves");
		break;
		case 5: printf("Equivale a Viernes");
		break;
		case 6: printf("Equivale a Sabado");
		break;
		case 7: printf("Equivale a Domingo");
		break;
		default: printf("Error, digite un numero del 1 al 7");
	}
	return 0;
}
