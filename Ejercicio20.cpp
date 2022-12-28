*Ejercicio 20- Escribir un programa que lea un matriz de enteros de 2 filas y 4 columnas 
  y muestre por pantalla la traspuesta a dicha matriz.
*/

#include<stdio.h>
#include<stdlib.h>



int main()
{
	int x,y, num=0, numeros[2][4];
	for(x=0; x<2; x++)
	{
		for(y=0; y<4; y++)
		{
			numeros[x][y]=num;
			num++;
		}
	}
	printf("La matriz original es: \n\n\n");
	for(x=0; x<2; x++)
	{
		for(y=0; y<4; y++)
		{
			printf("   %d   ",& numeros[x][y]);
		}
		printf("\n\n\n") ;
	}
	printf ("La traspuesta de la matriz es: \n\n\n");
	for (x=0; x<4; x++)
	{
		for (y=0; y<2; y++)
		{
			printf("   %d   ",& numeros[y][x]);
		}
		printf("\n\n\n") ;
	}
	return 0;
}
