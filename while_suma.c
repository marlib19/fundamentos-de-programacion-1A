#include <stdio.h>
int i;
int final;
int suma;
int fijo;
int main()
{
	printf("Ingrese un numero para mostrar su numeracion de uno en uno \n");
	scanf("%d", &final);
	i=1;
	while (i<=final)
	{
		printf("%d \n", i);
		i=i+1;
		fijo=i-1;
		suma=suma+fijo;
	}
		printf("La suma de los digitos es: %d \n", suma);
}
