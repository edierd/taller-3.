#include <stdio.h>
#include <stdlib.h>

void pedirdatos();
int contadorvocales(char*);
char nombreusuario[30];
int main(){
	pedirdatos();
	printf("\nel numero de vocales del nombre es %d ",contadorvocales(nombreusuario));
	system("pause");
	return 0;
}
void pedirdatos(){
printf("digite su nombre \n");
fgets(nombreusuario,30,stdin);
}

int contadorvocales(char*nombre){
int cont=0;

while(*nombre){
switch(*nombre){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u': cont++;					
}
nombre++;
}
return cont;
}
