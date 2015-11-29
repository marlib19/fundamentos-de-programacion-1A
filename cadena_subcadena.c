#include<stdio.h>
char cadena[50];
char sub[50];
int i;
int j;
int a;
int main()
{
	printf("Programa que busca una subcadena \n");
	printf("Ingrese una palabra: ");
	scanf("%s", cadena);
	printf("Ingrese la palabra que quiere buscar: ");
	scanf("%s", sub);
	j=0;
	i=0;
	a=0;
	while(cadena[i]!='\0')
	{
		while(cadena[i]==sub[j])
		{
			i++;
			j++;
			if(sub[j]=='\0')
			{
				printf("Si existe subcadena");
				a=1;
				break;
			}
		}
		i++;
		j=0;
	}
	if(a==0)
	{
		printf("No existe subcadena");
	}
}
