/*Ejercicio 24- Que lea una cadena y la muestre al reves*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main()
{
    int final,x;
    char palabra[MAX];
    printf("Escriba una frase: ");
    gets(palabra);
   
    for(x = 0;x < 50;x++)
    {
        if (palabra[x]=='\0')
           {
            final=x;
            break;
           }
    }
    printf("La cadena al reves es: "); 
    for(x = final-1;x >=0;x--)
    	{
      	   printf("%c",palabra[x]);
    	}
    return 0;
}
