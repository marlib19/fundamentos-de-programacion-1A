#include<stdio.h>
int n1;
int n2;
int suma;
int resta;
int mult;
int div;
int main()
{
	suma=n1+n2;
	printf("Dame un n�mero");
	scanf("%d", &n1);
	printf("Dame otro n�mero");
	scanf("%d", &n2);
	printf("La suma de los n�meros es: %d", suma);
	printf("La resta de los n�meros es: %d", resta);
	resta=n1-n2;
	printf("La multiplicacion de los n�meros es: %d", mult);
	mult=n1*n2;
	printf("La division de los n�meros es: %d", div);
	div=n1/n2;
}

