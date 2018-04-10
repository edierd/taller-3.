#include <stdlib.h>
#include <stdio.h>

int main(){
	 
int numeros[10];
for(int i=0;i<10;i++){
	printf("digite un numero\n");
	scanf("%d",&numeros[i]);
	if(numeros[i]%2==0){
		printf("el numero es par\n ");
	}
}
	
	system("pause");
	return 0;
}

