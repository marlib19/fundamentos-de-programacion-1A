#include<stdio.h>
int n1;
int n2;
int mult;
int cont;
int main()
{
    printf("Ingrese el primer numero para hacer la multiplicacion \n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero para hacer la multiplicacion \n");
    scanf("%d", &n2);
    if(n1>0 && n2>0)
    {
    for(cont=1; cont<=n1; cont++)
    {
              mult=mult+n2;
    }
    printf("El resultado de la multiplicacion es: %d", mult);
    }
    else
    {
        printf("El resultado de la multiplicacion es 0");
    }
}
