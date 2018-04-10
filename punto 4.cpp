

#include<stdio.h>
#include <stdlib.h>
#include<conio.h>


void pedirDatos();
float devolucionFraccionaria(float n);

float numero;

int main(){
	pedirDatos();
	
	printf("La parte fraccionaria del numero es: %f",devolucionFraccionaria(numero));
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite un numero: ");
	scanf("%f",&numero);
}

float devolucionFraccionaria(float n){
	
	int entero = n;
	
	float resultado = n - entero;
	
	return resultado;	
}
