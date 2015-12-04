 #include<stdio.h>
 int matriz1[3][3];
 int matriz2[3][3];
 int i;
 int j;
 int a;
 int b;
 int k;
 int main()
 {
 	printf("Programa que hace multiplicacion de matrices de 3x3 \n");
 	printf("Ingrese los numeros con los que quiere llenar la primera matriz: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &matriz1[i][j]);
		}
		printf("\n");
	}
 	printf("Ingrese los numeros con los que quiere llenar la segunda matriz: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("La matriz uno es: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", matriz1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("La matriz dos es: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("El resultado de la multiplicacion de matrices es: \n");
	for(k=0;k<3;k++)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				a=matriz1[k][j]*matriz2[j][i];
				b=b+a;
				if(j==2)
					{
						printf("%d ", b);
						b=0;
					}
			}
		}
		printf("\n");
	}
 }
