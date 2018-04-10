#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void tiempo(int,int&,int&,int&);

int main (){
int totalseg, horas, min, seg;

printf("digite el numero total de segundos");
scanf("%d",&totalseg);

	tiempo(totalseg,horas,min,seg);

printf("tiempo equivalente a la cantidad de segundos digitados:\n ");
printf("horas %d",horas);
printf("minutos %d" , min);
printf("segundos %d" ,seg);
	
	tiempo(totalseg,horas,min,seg);
	
	printf("tiempo equivalente de segundos digitados \n");
	printf("\nhoras %d",horas);
	printf("\nminutos %d",min);
	printf("\nsegundos %d",seg);
	
	getch();
	return 0;
}
void tiempo(int totalseg, int& horas, int& min, int& seg){
	
	 horas =totalseg/3600;
	 totalseg %= 3600;
	 min =totalseg/60;
	 seg =totalseg%60;
}


