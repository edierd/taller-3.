
#include<stdlib.h>
#include <stdio.h>
#include<conio.h>


struct Fecha{
	int dia,mes,anio;
}f1,f2;


void pedirDatos();
Fecha mayor(Fecha,Fecha);
void mostrarFechaMayor(Fecha);

int main(){
	pedirDatos();
	Fecha x = mayor(f1,f2);
	mostrarFechaMayor(x);	
	
	getch();
	return 0;
}

void pedirDatos(){
printf("\nDigite la Fecha1 ");
	printf("\nDia: ");
	 scanf("%d",&f1.dia);
	printf("\nMes: ");
	 scanf("%d",&f1.mes);
	printf("\nAnio: ");
	 scanf("%d",&f1.anio);
	
	printf("\n\nDigite la Fecha2 ");
	 printf("\nDia: ");
	  scanf("%d",&f2.dia);
	 printf("\nMes: ");
	  scanf("%d",&f2.mes);
	 printf("\nAnio: ");
	  scanf("%d",&f2.anio);
}

Fecha mayor(Fecha f1,Fecha f2){
	Fecha mayorFecha;
	
	
	if(f1.anio == f2.anio){
		
		if(f1.mes ==f2.mes){
			
			if(f1.dia == f2.dia){
				printf("\nAmbas fechas son iguales");
			}
			else if(f1.dia > f2.dia){
				mayorFecha = f1;
			}
			else{
				mayorFecha = f2;
			}
		}
		else if(f1.mes > f2.mes){
			mayorFecha = f1;
		}
		else{
			mayorFecha = f2;
		}
	}
	else if(f1.anio > f2.anio){
		mayorFecha = f1;
	}
	else{
		mayorFecha = f2;
	}
	
	
	return mayorFecha;
}

void mostrarFechaMayor(Fecha x){
	printf("\nMostrando fecha mayor %d ", x.dia/x.mes/x.anio);
}
