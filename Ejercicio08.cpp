/*Ejercicio 8- Que lea 10 números aleatorios 5 para un array y 5 para otro array distinto. 
  Mostrar los 10 números en pantalla mediante un solo array. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int auxiliar, array1[5], array2[5], array3[10];
	int x,x2;
	
	for(x=0; x<5; x++)
		{
			printf("Ingrese un numero: ");
			scanf("%d",&array1[x]);
		}
	for(x=0;x<5;x++)
		{
			printf("Ingrese un numero: ");
			scanf("%d",&array2[x]);
		}
	for(x=0; x<5; x++)
		{
			array3[x]=array1[x];
		}
	for(x=0; x<10; x++)
		{
			array3[5+x]=array2[x];
		}
	for(x=0; x<10; x++)
		{
			printf("%d\n",array3[x]);
		}
	return 0;
}
