#include <stdlib.h>
#include <stdio.h>

void pedirDatos();
void impares(int vec[],int);

int tam,vec[100];

int main(){
	pedirDatos();
	impares(vec,tam);
	
	system("pause");
	
	return 0;
}

void pedirDatos(){
	printf("Digite el tamaño del vector: ");
	scanf("%d",&tam);
	
	for(int i=0;i<tam;i++){
		printf("ingrese un numero %d",i+1);
		
		scanf("%d",&vec[i]);
	}
}

void impares(int vec[],int tam){
	int vecImpares[100];
	int j=0;
	for(int i=0;i<tam;i++){
		if(vec[i]%2!=0){
			vecImpares[j] = vec[i];
			j++;
		}
	}
	
	printf("\nImprimiendo los elementos impares del vector: ");
	for(int i=1;i<j;i++){
		
		printf("%d\n",vecImpares[j]);
		
		
		
	}
}

