#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void pedirDatos();
void comprobarOrdenamiento(int vec[],int);

int vec[100],tam;

int main(){
	pedirDatos();
	comprobarOrdenamiento(vec,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite el numero de elementos del vector: ");
	scanf("%d",&tam);
	
	for(int i=0;i<tam;i++){
		printf(%d i+1," Digite un numero: ");
		scanf("%d",&vec[i]);
	}
}

void comprobarOrdenamiento(int vec[],int tam){
	char band = 'F';
	
	int i=0;
	while((band=='F')&&(i<tam-1)){
		if(vec[i]>vec[i+1]){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		printf("\nEl arreglo esta ordenado en forma creciente");
	}
	else{
		printf("\nEl arreglo NO esta ordenado");
	}
}
