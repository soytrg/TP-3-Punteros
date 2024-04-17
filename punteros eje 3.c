#include <stdio.h>
// 3. Encontrar el mayor y el menor elemento de un arreglo usando punteros y funciones.

int vector[5]={7,1,3,4,6};
int num1, num2;
void ordenamiento_burbuja(int *vec, int *num1, int *num2) 
// pedimos el puntero del vector osea la dirreccion de memoria +
// y la dirreccion de memore de las variables que vamos a usar
{
	int x, y, aux; // declaracion de variables
	for(x=0;x<5;x++)
	{
		for(y=0;y<5;y++)
		{
			if(*(vec + x) < *(vec + y)) // Forzamos al vector a ser un puntero, y utilizamos X y Y para ir entre las dirrecciones de memoria
			{
				aux=*(vec + x); // guardamos la dirreccion de memore en una variable temporal
				*(vec + x)= *(vec + y); // remplazamos los valores dentro de los punteros
				*(vec + y) = aux; // ultimo intercambio
			}
		}
	}
	*num1 = *(vec + 0);
	*num2 = *(vec + 4);
}

int main()
{
	int x;
	
	ordenamiento_burbuja(vector,&num1,&num2);
	
	for(x=0;x<5;x++)
	{
		printf("%d\n",vector[x]);
	}
	
	printf("Numero mas chico: %d\n",num1);
	printf("Numero mas grande: %d",num2);
}
