#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

void pedirdatos();
void cambiarsigno(int vec [], int);
void mostrarvector(int vec[], int);

int vec[100],tam;

int main(){
    pedirdatos();	
	cambiarsigno(vec,tam);
	mostrarvector(vec,tam);
	
	getch();
	return 0;
}

void pedirdatos(){
	printf("digite el tamaño del vector:");
	scanf("%d",&tam);
	
	for(int i=0;i<tam;i++){
		printf( " digite un numero:");
		scanf("%d",&vec[i]);
	}
}
void cambiarsigno(int vec[], int tam){
 	for(int i=0;i<tam;i++){
		vec[i]*= -1;
	}
}
void mostrarvector(int vec[], int tam){
	printf("\nmostrando los elementos del vector con signo cambiado\n");
	
	for(int i=0;i<tam;i++){
		printf("vec[i],");
		
	}
}
