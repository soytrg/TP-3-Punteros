#include <stdio.h>


int x=5, y=10;

void intercambio(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
//	1. Intercambiar el valor de dos variables usando punteros y funciones.
//	Mostrando los valores iniciales y valores finales.	
	
	int num1=2, num2=5;
	printf("Variables antes del intercambio: %d, %d\n",x,y);
	intercambio(&x,&y);
	printf("variables despues del intercambio: %d, %d \n",x,y);
	
	
	return 0;
}
