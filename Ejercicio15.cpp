/*15 Que llene una matriz de 3x3 y muestre su traspuesta 
	(la traspuesta se consigue intercambiando filas por columnas y viceversa).*/
	
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y,num=0, numeros[4][4];
   	
	for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
            numeros[x][y]=num;
            num++;
        }
    }
   
    printf("La matriz original es: \n\n\n");
   
    for(x = 0;x < 3;x++)
    {
      for(y = 0;y < 3;y++)
      {
          printf("    %d     ", numeros[x][y]);
      }
      printf("\n\n\n");
    }
   
    printf("La traspuesta de la matriz es: \n\n\n");
   
    for(x = 0;x < 3;x++)
    {
      for(y = 0;y < 3;y++)
      {
          printf("    %d     ", numeros[y][x]);
      }
      printf("\n\n\n");
    }
   
    system("PAUSE");     
    return 0;
}
