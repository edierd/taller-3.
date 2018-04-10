//punto 21

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
char frase[30];
int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;

printf("digite una frase:");
fgets(frase,30,stdin);

for(int i=0;i<30;i++){
	switch(frase[i]){
	case 'a': vocal_a++; break; 
	case 'e': vocal_e++; break; 
	case 'i': vocal_i++; break; 
	case 'o': vocal_o++; break; 
	case 'u': vocal_u++; break; 
	
	}
}
printf ("vocal a %d \n",vocal_a);	
printf ("vocal e %d \n",vocal_e);
printf ("vocal i %d \n",vocal_i);
printf ("vocal o %d \n",vocal_o);
printf ("vocal u %d \n",vocal_u);

	getch();
	return 0;
}




	
	

