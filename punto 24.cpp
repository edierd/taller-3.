
#include <stdlib.h>
#include<stdio.h>
#include<conio.h>


int main(){
	int numeros[100] ,n,menor; 
	
	printf("digite el numero de elementos del arreglo");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("digite un numero");
		
		scanf("%d",&numeros[i]);
		for(int i=n;i>0;i--){
		
		if(numeros[i]<numeros[i]){
			menor= numeros[i];
		}
	}
	}
	
	printf("\nel menor elemento del vector es %d\n",menor);	
	getch();
	return 0;
}
	
	

		
