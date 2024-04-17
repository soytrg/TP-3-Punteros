// 4. Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando el resultado final.
#include <stdio.h>

int vector[] = {1,2,3,4,5};
int vector2[]= {0,0,0,0,0};

void copiado(int *vector, int *vector2,int dim1)
{
	int x;
	for(x=0;x<dim1;x++)
	{
		*(vector2 + x) = *(vector + x);
	}
}

int main()
{
	int x;
	
	int dim1 = sizeof(vector) / sizeof(vector[0]);
	
//	printf("%d\n",dim1);
	printf("Vectores antes del copiado: \n");
	for(x=0;x<dim1;x++)
	{
		printf("vector 1 posicion %d: %d\n",x,vector[x]);
	}
	printf("\n");
	for(x=0;x<dim1;x++)
	{
		printf("vector 2 posicion %d: %d\n",x,vector2[x]);
	}
	
	copiado(vector,vector2,dim1);
	
	printf("\nVectores despues del copiado: \n");

	for(x=0;x<dim1;x++)
	{
		printf("vector 1 posicion %d: %d\n",x,vector[x]);
	}
		printf("\n");
	for(x=0;x<dim1;x++)
	{
		printf("vector 2 posicion %d: %d\n",x,vector2[x]);
	}
}
