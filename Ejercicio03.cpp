/* Ejercicio 3- Que rellene de forma aleatoria un array de 10 elementos,
*  con los numeros primos comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.
*/

#include <stdlib.h>
#include <stdio.h>
#include<time.h>

#define MAX 100

int main()
{
	int num,x,x2,cont,cont2,numero[MAX];
	cont2=0;

	for(x=1; x<=MAX; x++)  /*Recorre las posiciones del arreglo*/
		{
			cont=0;
			for (x2=1; x2<=x; x2++)
				{
					if (x%x2 == 0)  /*Si el numero es divisor entonces no es primo*/
						{
			   				cont++;
		    			}
		    	}
			if (cont==2 || x2==1 || x2==0) /*Las tres primeras posiciones del arreglo*/
				{
					numero[cont2] = x;
					cont2++;
				}
		}
	for(x=1; x<cont2; x++)
		{
			printf("%d\n", numero[x]);
		}
	return 0;
}
