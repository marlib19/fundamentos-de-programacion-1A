#include<stdio.h>
int n1;
int n2;
int main()
{
	printf("Algoritmo que muestra la numeracion entre dos numeros \n");
	printf("Ingrese el primer numero \n");
	scanf("%d", &n1);
	printf("Ingrese el segundo numero \n");
	scanf("%d", &n2);
	if(n1<=n2)
	{
		for(n1=n1;n1<=n2;n1++)
		{
			printf("%d \n", n1);
		}
	}
	else
	{
		for(n2=n2;n2<=n1;n1--)
		{
			printf("%d \n", n1);
		}
	}
}
