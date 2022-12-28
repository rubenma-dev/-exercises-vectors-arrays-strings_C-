/*Ejercicio 30- Que solicite al usuario apellido y nombre y lo concatene 
para formar un nombre de usuario.*/

#include<conio.h>
#include<stdio.h>

int main()
{
	char nombre[50], apellido[50];
	printf("Ingrese un nombre: ");
	gets(nombre);
	
	printf("Ingrese un apellido: ");
	gets(apellido);
	
	printf("Nombre de usuario: %s %s",nombre, apellido);
}
