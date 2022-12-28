/*Ejercicio 29- Que lea una cadena y la encripte sumando 3 al código ASCII de cada carácter. 
Mostrar por pantalla.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,x;
    char frase[50];
   
    printf("Introduzca una frase: ");
    gets(frase);
   
    for(x = 0; x < 50;x++)
    {
      if (frase[x]!='\0')
      {
       frase[x]=frase[x]+3;
      }
    }
    printf("La nueva frase es: ",sum);
    printf("%s",frase);  
    return 0;
}
