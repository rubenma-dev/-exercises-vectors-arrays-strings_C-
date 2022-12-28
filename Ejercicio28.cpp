/*EJercicio 28- Que lea una cadena y convierta las minúsculas en mayúsculas y viceversa.
*/
#include<stdio.h>
#include<conio.h>

#define MAX 100
int main()
{
  char frase[MAX+1],frase2[MAX+1];
  int x=0;
  printf("Ingrese una palabra: ");
  gets(frase);

  while(frase[x]!='\0')
  {
    if (frase[x]>= 'a' && frase[x]<= 'z')
    	{
     		frase[x] = frase[x] - 'a' + 'A';
     	}
	else
    	{
			frase[x] = frase[x] - 'A' + 'a';
    	}
     x++;
    }
    printf("Cadena final es: %s\n", frase);
}
