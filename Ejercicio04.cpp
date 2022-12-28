/*Ejercicio 4- Que rellene de forma aleatoria un array 
de 10 elementos con los números pares comprendidos 
entre 1 y 100 y los muestre en pantalla en orden ascendente.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
	int x, cont, numero[MAX];
	cont = 0;
	
	for(x=1; x<=MAX; x++)
	{
		if (x%2 == 0)
			{
				numero[cont] = x;
				cont++;
			}
	}
	for(x=0; x<cont; x++)
		{
			printf("%d\n", numero[x]);
		}
	return 0;
}
