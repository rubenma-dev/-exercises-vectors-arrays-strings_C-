/* Ejercicio 27- Que lea una cadena y diga cuantas mayúsculas hay.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma=0, x;
    char palabra[50];
    printf("Escriba una palabra: ");
    gets(palabra);
   
    for(x=0; x<50; x++)
    {
      if (palabra[x]>=65 && palabra[x]<=90)
      {
       suma++;
      }
    }
    printf("La frase tiene %d mayusculas",suma);  
    return 0;
}
