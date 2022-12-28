*Ejercicio 19- Escribir un programa que lea una matriz de 3 filas y 3 columnas de valores enteros. 
A continuación, el programa debe pedir el número de una fila. 
El programa deberá devolver el máximo de esa fila.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
int  matriz[3][3],i=0,j=0,num=0,may=0;

for (i=1; i<=3; i++)
             {
             for(j=1;j<=3;j++)
                        {
                         printf("INTRODUCIR VALORES EN MATRIZ %dx%d: ",i,j);
                         scanf("%d",&matriz[i][j]);
                         }
              }
	printf("\n INTRODUCIR NUMERO DE FILA: ");
    scanf("%d",&num);
    printf("\n FILA SOLICITADA: %d ",num);

                         for (i=num; i<=num; i++)

                                    {

                                    for(j=1;j<=3;j++)

                                                 {

                                                 printf("%d",matriz[num][j]);
                                                 may=matriz[num][j];

                                                 }
                                    }
printf("\n EL VALOR MAYOR DE LA FILA: %d es: %d  ", num, may);
return 0;
}
