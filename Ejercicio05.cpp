/*Ejercicio 5- Que rellene de forma aleatoria un array de 10 elementos, con los números impares 
comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,cont,z,i,tabla[100];
    i=0;
        for (x=1;x<=100;x++)
            {
              cont=0;
              if (x%2==1)
        		   {
           			tabla[i]=x;
           			i++;
        		   } 
            }
           
        for (x=0;x<i;x++)
            {
        	printf("%d\n",tabla[x]);
    		} 
    system("PAUSE");     
    return 0;
}
