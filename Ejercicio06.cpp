/*Ejercicio 6- Que lea 10 números por teclado, los almacene en un array
 y muestre la suma y la multiplicación de todos.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
	int x, numero[MAX];
	int suma, mult;
	
	for(x=0; x<MAX; x++)
		{
			printf("Ingrese numero: \n");
			scanf("%d",&numero[x]);		
		}
	suma = numero[0];
	mult = numero[0];
	
	for(x=1; x<MAX; x++)
		{
			suma = suma+numero[x];
			mult = mult*numero[x];
		}
			printf("Suma: %d\n",suma);
			printf("Multiplicacion: %d\n",mult);
	return 0;
}

