

#include<stdlib.h>
#include <stdio.h>
#include<conio.h>


void pedirDatos();
int comprobarMenorElemento(int m[][100],int,int);

int m[100][100],nfilas,ncol;

int main(){
	pedirDatos();
	
	printf("\nEl menor elemento de la fila seleccionada  ",comprobarMenorElemento(m,nfilas,ncol));
	
	getch();
	return 0;
}

void pedirDatos(){
	
	printf("Digite el numero de filas ");
	scanf("%d",&nfilas);
	printf("Digite el numero de columnas ");
	scanf("%d",&ncol);
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			printf("Digite m[i][j]");
			scanf("%d",&m[i][j]);
		}
	}
}

int comprobarMenorElemento(int m[][100],int nfilas,int ncol){
	int fila,menor=99999;
	
	printf("\nDigite el numero de fila a comprobar ");
	scanf("%d",&fila);
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			if(i==fila){
				if(m[i][j] < menor){
					menor = m[i][j];
				}
			}
		}
	}
	
	return menor;
}
