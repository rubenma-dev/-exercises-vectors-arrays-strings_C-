/*Ejercicio 21.	Escribir un programa que lea una matriz de numeros enteros y que devuelva la suma de los elementos
 positivos de la matriz y la suma de los elementos negativos.*/

#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int  matriz[3][3],f=0,c=0,negativo=0,positivo=0;
	printf("PROGRAMA POSITIVOS Y NEGATIVOS \n");
	for (f=1; f<=3; f++)
       	{
       		for(c=1;c<=3;c++)
                {
                	printf("\n INTRODUCIR VALORES EN MATRIZ: ");
                	scanf("%d",&matriz[f][c]);
                }
        }
        for (f=1; f<=3; f++)
            {
				for(c=1;c<=3;c++)
                    {
                    	if (matriz[f][c]>0)
                            {
                                positivo=positivo + matriz[f][c] ;
                            }
                        else
                            {
                                negativo=negativo + matriz[f][c];
                            }
                    }
            }
	printf("SUMA DE POSITIVOS EN LA MATRIZ: %d ",positivo);
	printf("SUMA DE NEGATIVOS EN LA MATRIZ: %d ",negativo);
}
