/*Ejercicio 25- Que lea una cadena y diga cuantas vocales hay.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma=0,x;
    char palabra[50];
   
    printf("Introduzca una frase: ");
    gets(palabra);
   
    for(x = 0;x < 50;x++)
    {
      switch (palabra[x])
      {
           case 'a':
                suma++;
                break;
           case 'e':
                suma++;
                break;
           case 'i':
                suma++;
                break;
           case 'o':
                suma++;
                break;
           case 'u':
                suma++;
                break;            
           default:
                break;
      }
    }
    printf("en esta frase hay %d vocales",suma);   
    return 0;
}
