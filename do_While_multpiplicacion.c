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
            do
            {
                          mult=mult+n2;
                          cont=cont+1;
            }while(cont<n1);
            printf("El resultado de la multiplicacion es: %d \n", mult);
    }
    else
    {
        printf("El resultado de la multiplicacion en 0");
    } 
}
