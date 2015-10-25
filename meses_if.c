#include<stdio.h>
int mes;
int main()
{
    printf("Algoritmo que le asigna un mes a un numero \n");
    printf("Ingrese un numero para asignarle un mes \n");
    scanf("%d", &mes);
    if(mes>=1 && mes<=12)
    {
             if(mes!=2 && mes<2)
             {
                      printf("Enero");
             }
             if(mes!=1 && mes<3)
             {
                      printf("Febrero");
             } 
             if(mes>2 && mes<4) 
             {
                       printf("Marzo");
             } 
             if(mes>3 && mes<5)
             {
                      printf("Abril");
             }
             if(mes>4 && mes<6)
             {
                      printf("Mayo");
             }
             if(mes>5 && mes<7)
             {
                      printf("Junio");
             }
             if(mes>6 && mes<8)
             {
                      printf("Julio");
             }
             if(mes>7 && mes<9)
             {
                      printf("Agosto");
             }
             if(mes>8 && mes<10)
             {
                      printf("Septiembre");
             }
             if(mes>9 && mes<11)
             {
                      printf("Octubre");
             }
             if(mes>10 && mes<12)
             {
                      printf("Noviembre");
             }
             if(mes>11 && mes<13)
             {
                      printf("Diciembre");
             }
    }     
    else
    {
        printf("Incorrecto. Solo existen 12 meses");
    }
}
