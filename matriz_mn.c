 #include<stdio.h>
 int matriz1[100][100];
 int matriz2[100][100];
 int i=0;
 int j=0;
 int k=0;
 int m=0;
 int r=0;
 int a=0;
 int b=0;
 int c=0;
 int d=0;
 int main()
 {
 	printf("Programa que hace multiplicacion de matrices \n");
 	printf("Ingrese el numero de filas que quiere para la primera matriz: ");
 	scanf("%d", &a);
 	printf("Ingrese el numero de columnas que quiere para la segunda matriz: ");
 	scanf("%d", &b);
 	matriz1[0][0]=matriz1[a][b];
 	printf("Ingrese el numero de filas que quiere para la segunda matriz: ");
 	scanf("%d", &c);
 	printf("Ingrese el numero de columnas que quiere para la segunda matriz: ");
 	scanf("%d", &d);
 	if(b!=c)
	{
		printf("No se puede realizar la multiplicacion");
	}
 	if(b==c)
 	{
 		for(i=0;i<a;i++)
 		{
 			for(j=0;j<b;j++)
 			{
 				matriz1[i][j]=0;
 			}
 		}
 		for(i=0;i<c;i++)
 		{
 			for(j=0;j<d;j++)
 			{
 				matriz2[i][j]=0;
 			}
 		}
 	printf("Ingrese los numeros con los que quiere llenar la primera matriz: \n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d", &matriz1[i][j]);
		}
		printf("\n");
	}
 	printf("Ingrese los numeros con los que quiere llenar la segunda matriz: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("La matriz uno es: \n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d ", matriz1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("La matriz dos es: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("El resultado de la multiplicacion de matrices es: \n");
	for(k=0;k<a;k++)
	{
		for(i=0;i<d;i++)
		{
			for(j=0;j<3;j++)
			{
				r=matriz1[k][j]*matriz2[j][i];
				m=m+r;
				if(j==2)
					{
						printf("%d ", m);
						m=0;
					}
			}
		}
		printf("\n");
	}
	}
 }
