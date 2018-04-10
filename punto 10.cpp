#include <stdlib.h>
#include <conio.h>
#include <stdio.h>


void pedirdatos();
int calcularsuma(int vec[],int);

int vec[100],tam;

int main(){
	
	pedirdatos();
	
	printf("\nla suma de los elementos del vector es:",calcularsuma(vec,tam));
	
	getch();
	return 0;
}
void pedirdatos(){
	printf("digite el numero de elementos del vector:");
	scanf("%d",&tam);
	
	for (int i=0; i<tam;i++){
		printf( "i+1 ,.digite un numero:");
		scanf("%d",&vec[i]);
	}
}
int calcularsuma(int vec[], int tam){
	int suma;
	
	for(int i=0;i<tam;i++){
		suma += vec[i];
	}
	return suma;
}
