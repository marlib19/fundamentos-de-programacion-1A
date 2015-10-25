#include<stdio.h>
int edad;
int main()
{
printf("Ingresa tu edad \n");
scanf("%d", &edad);
if (edad<1000)
{
if(edad>=0 && edad<=12)
{
printf("Eres un niño");
}
else 
{
if(edad>=13 && edad<=18)
{
printf("Eres un adolescente");
}
else
{
if(edad>=19 && edad<=29)
{
printf("Eres un joven");
}
if(edad>=30 && edad<=59)
{
printf("Eres un adulto");
}
else
{
if(edad>=60)
printf("Eres un adulto mayor");
}
}
}
}
}
