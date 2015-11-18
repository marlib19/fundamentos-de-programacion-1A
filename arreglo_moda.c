#include<stdio.h>
int numeros[10];
int moda[10];
int i;
int m;
int mayor;
float prom;
int main()
{
printf("Algoritmo que realiza el promedio de diez numeros y determina la moda \n");
for(i=0;i<10;i++)
{
printf("Numero a promediar: ");
scanf("%d", &numeros[i]);
prom=prom+numeros[i];
}
for(i=0;i<10;i++)
{
	moda[i]=0;
}
for(i=0;i<10;i++)
{
	moda[numeros[i]-1]++;
}
m=0;
mayor=moda[0];
    for(i=0;i<10;i++) 
	{
        if(moda[i]>mayor)
        {
        m=i;
        mayor=moda[i];
        }
    }
prom=prom/10;
printf("El promedio es: %f \n", prom);
printf("La moda es: %d", numeros[m]);
}
