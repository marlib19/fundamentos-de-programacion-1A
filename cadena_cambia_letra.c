#include<stdio.h>
char cadena[50];
char buscar;
char remplazar;
int i;
int main()
{
	printf("Ingresa una palabra: \n");
	scanf("%s", cadena);
	printf("Teclee la letra a cambiar: ");
	scanf(" %c", &buscar);
	printf("Teclee la nueva letra: ");
	scanf(" %c", &remplazar);
	for(i=0;i<50;i++)
	{
		if(cadena[i]==buscar)
		{
			cadena[i]=remplazar;
		}
	}
	printf("%s", cadena);
}
