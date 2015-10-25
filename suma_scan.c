#include<stdio.h>
int n1;
int n2;
int resultado;
int main()
{
    printf("Dame un numero \n");
    scanf("%d", &n1);
    printf("Dame otro numero \n");
    scanf("%d", &n2);
	resultado=n1+n2;
	printf("La suma de los números es: %d", resultado);
}
