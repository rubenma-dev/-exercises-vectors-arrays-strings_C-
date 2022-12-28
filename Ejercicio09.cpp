/*Ejercicio 9. Que lea 5 numeros por teclado, los copie a otro array multiplicados por 2 y muestre el segundo array.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1[5],num2[5],x;

  for (x=0;x<5;x++)
  		{
           printf("Escriba un numero: ");
           scanf("%d",&num1[x]);
      	}
  for(x=0;x<5;x++)
  	 {
       num2[x]=num1[x]*2;
     }
  for (x=0;x<5;x++){
      printf("%d ",num2[x]);
  }     
  return 0;
}
