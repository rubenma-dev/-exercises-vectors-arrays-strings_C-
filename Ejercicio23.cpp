/* Ejercicio 23- Escribir un programa que lea una matriz de 4 filas y 3 columnas, 
* la visualice por pantalla y a continuacion encuentre el mayor 
* y el menor elemento de la matriz y sus posiciones.
*/

#include <stdio.h>
#include <stdlib.h>
#define FILA 4
#define COLUMNA 3

int main()
{
	int array[FILA][COLUMNA], num, mayor, menor, posicionmayor[2], posicionmenor[2], i, j;
	
	for (i = 0; i < FILA; ++i)
	{
		for (j = 0; j < COLUMNA; ++j)
		{
			printf("Ingrese el valor de la posicion %dx%d: ",i,j);
			scanf("%d", &array[i][j]);

			num = array[i][j];

			mayor = i == 0 ? num: mayor; 
			menor = i == 0 ? num : menor;

			if (num > mayor)
			{
				mayor = num;
				posicionmayor[0] = i;
				posicionmenor[1] = j;
			}
			if (num < menor)
			{
				menor = num;
				posicionmenor[0] = i;
				posicionmenor[1] = j;
			}
		}
	}

	printf("\n Original: \n");
	for (i = 0; i < FILA; ++i)
	{
		for (j = 0; j < COLUMNA; ++j)
		{
			printf("%d, ",array[i][j] );
		}	
		printf("\n");
	}

	printf("El mayor es: %d \n", mayor);
	printf("La posicion del mayor es %dx%d\n", posicionmayor[0],posicionmayor[1]);
	printf("El menor es: %d \n", menor);
	printf("La posicion del menor es %dx%d\n", posicionmenor[0],posicionmenor[1]);
	return 0;
}
