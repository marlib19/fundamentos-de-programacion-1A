#include<stdio.h>
int resta;
int n1;
int n2;
int main()
{
    printf("Algoritmo que realiza la resta de dos numeros \n");
    printf("Ingrese un numero \n");
    scanf("%d", &n1);
    printf("Ingrese otro numero \n");
    scanf("%d", &n2);
    resta=n1-n2;
    printf("El resultado de la resta es: %d", resta);
}
