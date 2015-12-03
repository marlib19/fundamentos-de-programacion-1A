 #include<stdio.h>
 int identidad[3][3];
 int vector[1][3];
 int i;
 int j;
 int a;
 int b;
 int main()
 {
 	printf("Ingrese los numeros con los que quiere llenar la matriz: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &identidad[i][j]);
		}
		printf("\n");
	}
 	printf("Ingrese los numeros con los que quiere llenar el vector: \n");
	i=0;
	for(j=0;j<3;j++)
		{
			scanf("%d", &vector[i][j]);
		}
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
	i=0;
	printf("El vector es: \n");
		for(j=0;j<3;j++)
		{
			printf("%d ", vector[i][j]);
			printf("\n");
		}
	printf("\n");
	printf("La multiplicacion de la matriz por el vector es: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a=identidad[i][j]*vector[0][j];
			b=b+a;
			if(j==2)
			{
				printf("%d ", b);
				b=0;
			}
		}
		printf("\n");
	}
 }
