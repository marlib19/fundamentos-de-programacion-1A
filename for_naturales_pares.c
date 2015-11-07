#include<stdio.h>
int num;
int cont;
int par;
int main()
{
    printf("Algoritmo que imprime los numeros naturales anteriores al numero asignado por el usuario \n");
    printf("Ingrese un numero \n");
    scanf("%d", &num);
    for(cont=1;cont<=num;cont++)
    {
                                 printf("%d \n", cont);
                                 par=cont%2;
                                 if(par<1)
                                 {
                                          for(par=2;par<=cont;par++)
                                          {
                                                                        printf("%d \n", cont);
                                          }                           
                                 }
    }
}
