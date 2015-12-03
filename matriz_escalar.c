#include<stdio.h>
int identidad[3][3];
int i;
int j;
int esc;
int e;
int main()
{
	printf("Ingrese los numeros con los que quiere llenar la matriz: \n");
	scanf("%d", & identidad[0][0]);
	scanf("%d", & identidad[0][1]);
	scanf("%d", & identidad[0][2]);
	scanf("%d", & identidad[1][0]);
	scanf("%d", & identidad[1][1]);
	scanf("%d", & identidad[1][2]);
	scanf("%d", & identidad[2][0]);
	scanf("%d", & identidad[2][1]);
	scanf("%d", & identidad[2][2]);
	printf("Ingrese el numero que va a multiplicar a la matriz: ");
	scanf("%d", &esc);
	printf("\n");
	printf("La matriz es: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", identidad[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("La multiplicacion de la matriz por un escalar es: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			e=esc*identidad[i][j];
			printf("%d ", e);
		}
		printf("\n");
	}
}
