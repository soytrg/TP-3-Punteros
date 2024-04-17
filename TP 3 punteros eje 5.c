// 5. Concatenar dos cadenas usando punteros y funciones.
#include <stdio.h>
#include <string.h>

void concatenado(char *string1, char *string2, char *string3,int longitud1, int longitud2)
{
	int i,cont=0;
	
	for(i = 0; i < longitud1; i++)
    {
        *(string3 + i) = *(string1 + i);
    }
    
    for(i = longitud1; i < longitud1 + longitud2; i++)
    {
        *(string3 + i) = *(string2 + cont);
        cont++;
    }
    
}

int main()
{
	int longitud1,longitud2;
	char string1[50], string2[50], string3[100];
	
	printf("Ingrese la primer oracion:\n");	
	fgets(string1, sizeof(string1), stdin);
	
	printf("Ingrese la segunda oracion: \n");
	fgets(string2, sizeof(string2), stdin);
	
	if(string1[strlen(string1) - 1] == '\n')
	{
        string1[strlen(string1) - 1] = ' ';
	}
	
	longitud1=strlen(string1);
	longitud2=strlen(string2);
	
	concatenado(string1, string2, string3, longitud1, longitud2);
	
	printf("\nLa oracion resultante es: %s\n",string3);
}
