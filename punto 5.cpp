

#include <stdlib.h>
#include <stdio.h>
#include<conio.h>


template <class T>
T maximo(T dato1, T dato2, T dato3);

int main(){
	char dato1='e',dato2='f',dato3='a';
	
	printf("El maximo valor es: %d ",maximo(dato1,dato2,dato3));
	
	getch();
	return 0;
}

template <class T>
T maximo(T dato1, T dato2, T dato3){
	T max;
	
	if((dato1 > dato2) && (dato1 > dato3)){
		max = dato1;
	}
	else{
		 if((dato2>dato1) && (dato2>dato3)){
			max = dato2;
		}
		else{
			max = dato3;
		}
	}
	return max;
}
