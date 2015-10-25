#include<stdio.h>
float cuenta;
float propina;
float cuentaPersona;
int personas;
int main()
{
	printf("¿De cuanto es la cuenta? \n");
	scanf("%f", &cuenta);
	propina=cuenta*.10;
	printf("¿Cuántas personas pagarán la cuenta? \n");
	scanf("%d", &personas);
	printf("La propina es de %f", propina);
	cuenta=cuenta+propina;
	printf("El total a pagar es de: %f", cuenta);
	cuentaPersona=cuenta/personas;
	printf("Cada persona pagará: %f ", cuentaPersona);
}

