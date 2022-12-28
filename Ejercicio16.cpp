/*Ejercicio 16- Escribir un programa que pida 10 números
enteros por teclado y que imprima por pantalla:*/

Cuántos de esos números son pares.
Cuál es el valor del número máximo.
Cuál es el valor del número mínimo.*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main()
{	
	int n[MAX], x, mayor, menor, i=0;

      for(x=0; x<MAX; x++)
      {
	for(x=0; x<MAX  ; x++)
	{
		printf ("Ingrese un numero: ");
		scanf("%d", &n[x]);
	 }
	 	for(x=0; x<MAX; x++)
	       {
			mayor= n[0];
			menor= n[0];

		     if(n[x]>mayor)
		     {
			       mayor= n[x];
		     }
		     else
		     {
			       if(n[x]<menor)
			       {
					menor= n[x];
			       }
		     }
		     if(n[x] % 2 == 0)
		     {
			   i++;
		     }
	       }
      }
    printf("Numeros pares introducidos: %d\n", i);
    printf("Valor del numero maximo: %d\n", mayor);
    printf("Valor del numero minimo: %d\n", menor);
    return 0;
}
