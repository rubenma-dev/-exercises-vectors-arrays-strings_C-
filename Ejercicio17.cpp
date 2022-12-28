/*17- Escribir un programa que lea un vector de 10 elementos. 
Deberá imprimir el mismo vector por pantalla pero invertido. 
Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 
el programa debería imprimir 10 9 8 7 6 5 4 3 2 1.
*/

#include<stdio.h>

void VectorReverso(int vector[], int inicio, int final)
{
	 int temp;
	while (inicio < final)
	{
		temp = vector[inicio];
		vector[inicio] = vector[final];
		vector[final] = temp;
		inicio++;
		final--;
	}
}	

void imprimirVector(int vector[], int longitud)
{
	int i;
	for (i=0; i < longitud; i++)
		printf("%d ", vector[i]);
}

int main()
{
	int x, vector[10];
	for(x=0; x<10; x++)
		{
			printf("Ingrese un numero: ");
			scanf("%d",&vector[x]);
		}		
	int longitud = sizeof(vector) / sizeof(vector[0]);
	
	imprimirVector(vector, longitud);
	VectorReverso(vector, 0, longitud-1);
	
	printf("\n Vector invertido es \n");
	imprimirVector(vector, longitud);
	return 0;
}
