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
	printf("Dame un número");
	scanf("%d", &n1);
	printf("Dame otro número");
	scanf("%d", &n2);
	printf("La suma de los números es: %d", suma);
	printf("La resta de los números es: %d", resta);
	resta=n1-n2;
	printf("La multiplicacion de los números es: %d", mult);
	mult=n1*n2;
	printf("La division de los números es: %d", div);
	div=n1/n2;
}

