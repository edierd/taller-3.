
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void calc_anios(int,int&,int&,int&);

int main(){
	int totalDias,anio,mes,dia;
	
	printf("Digite el numero total de dias transcurridos: ");
	scanf("%d",&totalDias);
	
	calc_anios(totalDias,anio,mes,dia);
	
	printf("Fecha Actual: %d ",dia+1,mes+1,anio+2000);	
	
	getch();
	return 0;
}

void calc_anios(int totalDias,int& anio,int& mes,int& dia){
	anio = totalDias/365;
	totalDias %= 365;
	mes = totalDias/30;
	dia = totalDias%30;
}
