//#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
//using namespace std;


void pedirdatos();
void comprobarsimetria(int m[][100],int,int);

int m[100][100],nfilas, ncol;

int main(){
	 pedirdatos();
	comprobarsimetria(m,nfilas,ncol);
	
	
	getch();
	return 0;
}
void pedirdatos(){
printf("digite el numero de filas");
scanf("%d",&nfilas);
printf("digite el numero de columnas");
scanf("%d",&ncol);

for (int i=0;i<nfilas;i++){
	for(int j=0;j<ncol;j++){
		printf("digite un numero",m[i][j]);
		scanf("%d",&m[i][j]);
	}
}
}
void comprobarsimetria(int m[][100], int nfilas, int ncol)
{
	int cont = 0;
	
	if(nfilas == ncol){
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			if(m[i][j] == m[j][i]){
				cont++;
			}
			
		}
	}
}
if(cont == nfilas*ncol){
	printf("la matriz es simetrica");
}
else{
	printf("la matriz no es simetrica");
}
}
/*
#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void comprobarSimetria(int m[][100],int,int);

int m[100][100],nfilas,ncol;

int main(){
	pedirDatos();
	comprobarSimetria(m,nfilas,ncol);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"Digite el numero de columnas: ";
	cin>>ncol;
	
	//Pedimos todos los elementos de la matriz
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite m["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}

void comprobarSimetria(int m[][100],int nfilas,int ncol){
	int cont = 0;
	
	//Si es cuadrada
	if(nfilas==ncol){
		//y ademas si Aij = Aji
		for(int i=0;i<nfilas;i++){
			for(int j=0;j<ncol;j++){
				if(m[i][j]==m[j][i]){
					cont++;//El conteo debe ser igual al numero de elementos de la matriz
				}
			}
		}
	}
	
	if(cont == nfilas*ncol){
		cout<<"\nLa matriz es Simetrica";
	}
	else{
		cout<<"\nLa matriz NO es simetrica";
	}
}

*/
