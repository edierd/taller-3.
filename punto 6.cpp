

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

	void intercambiar(int&, int&);
int main(){
	

	int num1=10, num2=15;
	
printf("el valor de num1 es %d",num1);

printf("el valor de num2 es %d", num2);


intercambiar(num1,num2);

printf("\n el nuevo valor de num1 es %d",num1);

printf(" el nuevo valor de num2 es %d",num2);



	getch();
	return 0;
}
void intercambiar(int& num1, int& num2){
	int aux;
	aux = num1;
	num1 = num2;
	num2 = aux;
	
}




