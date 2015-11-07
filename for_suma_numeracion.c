#include <stdio.h>
int i;
int final;
int suma;
int fijo;
int main()
{
	printf("Ingrese un numero para mostrar su numeracion de uno en uno \n");
	scanf("%d", &final);
	for(i=1; i<=final; i++)
	{
             printf("%d \n", i);
             suma=suma+i;
    }
		printf("La suma de los digitos es: %d \n", suma);
}
