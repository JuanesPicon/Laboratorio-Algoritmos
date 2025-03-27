#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int numero;
void par()
{ if( numero %2==0){
	printf("el numero es par");
	
	} else {printf ("el numero es impar");
	}
	
}


int main(int argc, char** argv) 
{ printf("Digite un numero para verificar si es par o impar: ");
	scanf("%d", &numero);
	par();
	
	return 0;
}
