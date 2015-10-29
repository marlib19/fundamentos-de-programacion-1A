#include<stdio.h>
int opc;
int sel;
int prod;
int main()
{
	printf("Algoritmo que vente y muestra las ganancias de una tienda \n");
	printf("¿Que desea hacer? \n");
	printf("1.Vender \n");
	printf("2.Mostrar ganancias \n");
	scanf("%d", &opc);
	switch(opc)
	{
		case 1: { 
			printf("1.Papas $10 \n");
			printf("2.Refrescos $8 \n");
			printf("3.Galletas $6 \n");
			printf("4.Chicles $1 \n");
			printf("5.Paletas $2 \n");
			printf("¿Que desea comprar? \n");
			scanf("%d", &sel);
			switch(sel)
			{
				case 1: {
				printf("¿Cuantas papas desea comparar? \n");
				scanf("%d", &prod);
				prod=prod*10;
				printf("El total a pagar es de: %d", prod);
						}break;
				case 2: {
				printf("¿Cuantos refrescos desea comparar? \n");
				scanf("%d", &prod);
				prod=prod*8;
				printf("El total a pagar es de: %d", prod);
						}break;
				case 3: {
				printf("¿Cuantas galletas desea comparar? \n");
				scanf("%d", &prod);
				prod=prod*6;
				printf("El total a pagar es de: %d", prod);
						}break;
				case 4: {
				printf("¿Cuantos chicles desea comparar? \n");
				scanf("%d", &prod);
				prod=prod*1;
				printf("El total a pagar es de: %d", prod);
						}break;
				case 5: {
				printf("¿Cuantas paletas desea comparar? \n");
				scanf("%d", &prod);
				prod=prod*2;
				printf("El total a pagar es de: %d", prod);
						}break;
				default: {
							printf("Seleccion incorrecta");
						}break;
			}
				}break;
		case 2: { 
			printf("Las ganancias son de $500");
				}break;
		default: {
					printf("Seleccion incorrecta");
				}
	}
}
