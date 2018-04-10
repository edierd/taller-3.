#include <stdio.h>
#include <stdlib.h>



int main()
{
float n,cuadrado;

printf("Escriba numero a elevar al cuadrado: ");
scanf("%f",&n);
cuadrado = n*n;
printf("el resultado es:%f" ,cuadrado);


return 0;
}

float al_cuadrado(float n)
{
return n*n;
}

