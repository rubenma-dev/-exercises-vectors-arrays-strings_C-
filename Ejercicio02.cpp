/* Ejercicio 2- Que rellene de forma aleatoria un array de 10 elementos, 
 *    con los 100 primeros numeros enteros y los muestre en pantalla en orden descendente.
 */
 
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
	int x, numero[MAX];
	
	for (x=1; x<=MAX; x++)
		{
			numero[x] = x;
		}
	for (x=MAX; x>=1; x--)
		{
			printf("%d \n",numero[x]);
		}
	return 0;
}
