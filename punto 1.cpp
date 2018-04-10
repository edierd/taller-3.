#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

void pedirDatos();
void mult(float x,float y);


float num1,num2;

int main(){
	pedirDatos();
	mult(num1,num2);
	
	getch();
	return 0;
}

void pedirDatos(){	
	printf("Digite el primer numero: ");
	 scanf("%f",&num1);
	 printf("Digite el segundo numero: ");
	 scanf("%f",&num2);
}

void mult(float x,float y){
	float multiplicacion = x * y;

	printf("\nLa multiplicacion es: %f" , multiplicacion );
}
