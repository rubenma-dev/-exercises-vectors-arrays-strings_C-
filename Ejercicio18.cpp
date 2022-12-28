/* Ejercicio 18- Escribir un programa que lea 10 numeros por teclado. 
*Luego lea dos mas e indique si estos numeros estan entre los anteriores.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
	int array[MAX], i, numberOne, numberTwo, findOne = 0, findTwo = 0;

	for (i = 0; i < MAX; ++i)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &array[i]);
	}

	printf("Ingrese numero a buscar: ");
	scanf("%d", &numberOne);
	printf("Ingrese numero a buscar: ");
	scanf("%d", &numberTwo);

	for (i = 0; i < MAX; ++i)
	{
		findOne = numberOne == array[i] ? ++findOne : findOne;
		findTwo = numberTwo == array[i] ? ++findTwo : findTwo; 
	}

	if ( (findOne == 0) && (findTwo == 0) )
	{
		printf("No se encuentran en la lista \n");
	}
	else
	{
		if (findOne > 0)
		{
			printf("EL numero '%d' se encuentra en la lista\n", numberOne );
		}

		if (findTwo > 0)
		{
			printf("EL numero '%d' se encuentra en la lista\n", numberTwo);
		}
	}
	return 0;
}
