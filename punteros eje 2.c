//2. Encontrar la suma y el promedio de los elementos de un arreglo usando punteros y funciones.
#include <stdio.h>

int suma;
float promedio;

void suma_y_promedio(int *vec,int n,int *suma, float *promedio)
{
	int i;
	*suma=0;
	for(i=0;i<n;i++)
	{
		*suma += *(vec + i);
	}
	
	*promedio = (float)*suma / n;
	
}

int main()
{
	int n;
	printf("Ingrese la dimension del vector: \n");
	scanf("%d",&n);
	
	int vector[n],x;
	
	for(x=0;x<n;x++)
	{
		printf("Ingrese los nuemors del vector en la posicion %d:\n",x);
		scanf("%d",&vector[x]);	
	}
	
	suma_y_promedio(vector,n,&suma,&promedio);
	
	printf("Resultados: \nsuma: %d \npromedio: %f",suma,promedio);
}


