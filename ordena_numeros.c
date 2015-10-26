#include<stdio.h>
int n1;
int n2;
int n3;
int mayor;
int medio;
int menor;
int main()
{
    printf("Algoritmo que acomoda tres numeros de mayor a menor \n");
    printf("Ingresa el primer numero \n");
    scanf("%d", &n1);
    printf("Ingresa el segundo numero \n");
    scanf("%d", &n2);
    printf("Ingresa el tercer numero \n");
    scanf("%d", &n3);
    if(n1>n2 && n1>n3)
    {
             mayor=n1;
    }
    else
    {
        if(n2>n3 && n2>n1)
        {
                 mayor=n2;
        }
        else
        {
            mayor=n3;
        }
    }
    if(n1<n2 && n1<n3)
    {
             menor=n1;
    }
    else
    {
        if(n2<n3 && n2<n1)
        {
                 menor=n2;
        }
        else
        {
            menor=n3;
        }
    }
    if(n1!=mayor && n1!=menor)
    {
                 medio=n1;
    }
    else
    {
        if(n2!=mayor && n2!=menor)
        {
                     medio=n2;
        }
        else
        {
            medio=n3;
        }
    }
    printf("El numero mas grande es: %d \n", mayor);
    printf("El numero medio es: %d \n", medio);
    printf("El numero mas pequeño es: %d \n", menor);
}
