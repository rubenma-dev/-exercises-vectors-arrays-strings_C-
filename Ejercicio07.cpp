/*Ejercicio 7- Que lea 10 numeros aleatorios, los almacene en un array y los ordene de forma ascendente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float aux, numeros[10];
  int i,j,n=10;
  for (i=0;i<n;i++)
  	   {
    	printf("Escriba un numero: ");
        scanf("%f",&numeros[i]);
       }
  for(i=0;i<n-1;i++)
     {
      for(j=i+1;j<n;j++)
         {
           if(numeros[i]<numeros[j])
              {
           		aux=numeros[i];
           		numeros[i]=numeros[j];
           		numeros[j]=aux;
       		  }
   		}	
  }
 
  	for (i=n-1;i>=0;i--)
  		{
      		printf("%f\n",numeros[i]);
  		}
	return 0;
}
