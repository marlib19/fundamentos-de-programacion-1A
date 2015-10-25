#include<stdio.h>
int n1;
int n2;
int suma;
int resta;
int mult;
int div;
int main()
{
	printf("Dame un numero para hacer la suma \n");
	scanf("%d", &n1);
	printf("Dame otro número \n");
	scanf("%d",  &n2);
	suma=n1+n2;
	printf("El resultado de la suma es:  %d \n", suma );	
	printf("Dame un numero para hacer la resta \n");
	scanf("%d", &n1);
	printf("Dame otro número \n");
	scanf("%d",  &n2);
	resta=n1-n2;
	printf("El resultado de la resta es: %d \n", resta);
	printf("Dame un numero para hacer la multiplicacion \n");
	scanf("%d", &n1);
	printf(" Dame otro número \n");
	scanf("%d",  &n2);
	mult=n1*n2;
	printf("El resultado de la multiplicacion es: %d \n", mult);
	printf("Dame un numero para hacer la division \n");
	scanf("%d", &n1);
	printf("Dame otro número \n");
	scanf("%d", &n2);
	div=n1/n2;
	printf("El resultado de la division es: %d \n", div);
}

