#include <stdlib.h>
#include <stdio.h>

const int dim=100;
int i,j,fil,col;
float MatA[dim][dim],MatB[dim][dim]; 

int main(void)
{
    printf("Programa que suma matrices:\n\n");
    printf("Introduzca el tamano de las matrices:\n\n Filas:"); 
	scanf("%i", &fil);
    printf(" Columnas: "); scanf("%i", &col);
    
    /*Se piden los datos*/
    printf("\n\nIntroduca los datos de la Matriz A:\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("\nIntroduzca numero : ",i,j); 
			scanf("%f", &MatA[i][j]);
        }
    }
    
    printf("\n\n\nIntroduca los datos de la Matriz B:\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("\nIntroduzca numero : ",i,j);
			 scanf("%f", &MatB[i][j]);
        }
    }
    
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++) MatA[i][j]=MatA[i][j]+MatB[i][j]; 
    }
    
    printf("\n\nLa suma de la matriz es:\n\n");
    for(i=1;i<=fil;i++){
	
    
        for(j=1;j<=col;j++) {
		
		printf("%.f",MatA[i][j]);
        printf("\n");
    }
}
    system("pause");
    return 0;
}
