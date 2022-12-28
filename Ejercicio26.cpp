/*Ejercicio 26- Que lea una cadena y diga cuantas no son vocales.*/

#include <stdio.h>

int main()
{
	char cadena[100];
	int x=0,i=0,h=0;
	printf("Ingrese una cadena \n");
	gets(cadena);
	
	while(cadena[x]!='\0')
		  {
		  	if(cadena[x]=='a'||cadena[x]=='e'||cadena[x]=='i'||cadena[x]=='o'||cadena[x]=='u'||cadena[x]=='A'||cadena[x]=='E'||cadena[x]=='I'||cadena[x]=='O'||cadena[x]=='U'||cadena[x]==' ')
				i++;
			else
			 	h++;
				x++;	
		  }
	printf("En la cadena ingresada no son vocales %d letras",h);
}
