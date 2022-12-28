#include <iostream>
#include <conio.h>

int main()
{
  	int mat[6][6];
  	int n,i,j,f1,f2,aux;
    printf("\n \t \t Intercambia Valores entre las filas i y j \n");
  	for (i=1;i<=4;i++)
      {
        for (j=1;j<=4;j++)
      {
   do
   {
      printf("\t \t \tValor en la posicion \t", i, j);
      scanf("%d",&mat[i][j]);
   }
   while(mat[i][j]<0);
     }
     }
// IMPRIME MATRIZ
printf("\n La matriz es: \n");
for (i=1;i<=4;i++)
 {
 printf("\n \t \t \t");
   for (j=1;j<=4;j++)
   {
        printf("  %d  ", mat[i][j]);
   }
}
printf(" \n \n\t \t \t Para Intercambiar las filas");
printf(" \n \n Ingrese el numero de la 1ra. fila: ");
scanf("%d",&f1);
printf(" \n Ingrese el numero de la 2da. fila: ");
scanf("%d",&f2);


//Intercambiando
  for (j=1;j<=4;j++)
   {     aux=mat[f1][j];
  mat[f1][j]=mat[f2][j];
  mat[f2][j]=aux;
   };


//La nueva matriz
 for (i=1;i<=4;i++)
 {
  printf("\n \t \t \t");
   for (j=1;j<=4;j++)
   {
 printf("%d", mat[i][j]);
  printf("\t");
    }
  }
  getch();
  return 0;
 }
