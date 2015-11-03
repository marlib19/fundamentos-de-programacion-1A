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
		while(n1<=n2)
		{
			printf("%d \n", n1);
			n1=n1+1;
		}
	}
	else
	{
		while(n2<=n1)
		{
			printf("%d \n", n1);
			n1=n1-1;
		}
	}
}
