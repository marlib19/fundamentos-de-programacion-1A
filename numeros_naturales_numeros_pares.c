#include<stdio.h>
int num;
int cont;
int par;
int main()
{
    printf("Algoritmo que imprime los numeros naturales anteriores al numero asignado por el usuario \n");
    printf("Ingrese un numero \n");
    scanf("%d", &num);
    cont=1;
             while(cont<=num)
             {
                             printf("%d \n", cont);
                             cont=cont+1;
                             par=cont%2;
                             if(par<1 && cont<=num)
                             {
                                      par=2;
                                      while(par<=cont)
                                      {
                                            printf("%d", cont);
                                            par=par+1;
                                      }
                             }
             }
}
