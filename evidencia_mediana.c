//Programa que calcula la mediana
#include<stdio.h>
int numeros[10];
int i;
int j;
int auxiliar;
int mediana;
int med;
int d;
int main()
{
	printf("Programa que calcula la mediana de diez numeros \n");
	for(i=0;i<10;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numeros[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(numeros[i]>numeros[j])
			{
				auxiliar=numeros[i];
				numeros[i]=numeros[j];
				numeros[j]=auxiliar;
			}
		}
	}
	printf("Los numeros ordenados son: \n");
	for(i=0;i<10;i++)
	{
		printf("%d \n", numeros[i]);
	}
	mediana=10/2;
	mediana=numeros[mediana-1];
	printf("La mediana es: %d", mediana);
}
