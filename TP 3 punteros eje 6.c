// 6. Contar el número de ocurrencias de un elemento en un arreglo usando puntero y funciones 
#include <stdio.h>
#include <string.h>
char string[50],letra;
int contador=0;
void buscador(char *string, int longitud);

int main()
{
	int longitud;
	
	printf("Ingrese una oracion o palabra: \n");
	fgets(string, sizeof(string), stdin);
	longitud= strlen(string);
	
	
	printf("Ingrese la letra que quiere buscar: \n");
	scanf("%c",&letra);
	
	buscador(string,longitud);
	
	printf("La letra %c aparece %d veces en la cadena.\n",letra,contador);	
}

void buscador(char *string, int longitud)
{
	int x;
	for(x=0;x<longitud;x++)
	{
		if( *(string + x) == letra)
		{
			contador++;
		}
	}
}
