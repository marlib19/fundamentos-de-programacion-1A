#include<stdio.h>
int kilos;
int carga;
int main()
{
	printf("¿Cuantos kilos de ropa quiere lavar? \n");
	scanf("%d", &kilos);
	//if(kilos<100)
	//{
		if(kilos>=16 && kilos<=20)
		{
			printf("Su carga de ropa es maxima \n");
            printf("Seleccione el tipo de ropa que desea lavar \n");
            printf("1.Delicada \n");
            printf("2.Normal \n");
            printf("3.Sucia \n");
            scanf("%d", &carga);
            if(carga>0 && carga<4)
                   {
                              if(carga!=2 && carga!=3)
                              {
                              printf("Su ropa se lavara durante 5 minutos");
                              }
                              else 
                              {
                                   if(carga!=1 && carga!=3)
                                  {
                                             printf("Su ropa se lavara durante 10 minutos");
                                    }
                              if(carga!=1 && carga!=2)
                              {
                                          printf("Su ropa se lavara durante 20 minutos");
                              }
                              }
                   }
                   else
                   {
                   printf("Opcion incorrecta");
                   }	
		}
		if(kilos>=11 && kilos<=15)
		{
			printf("Su carga de ropa es media \n");
			printf("Seleccione el tipo de ropa que desea lavar \n");
            printf("1.Delicada \n");
            printf("2.Normal \n");
            printf("3.Sucia \n");
            scanf("%d", &carga);
            if(carga>0 && carga<4)
                   {
                              if(carga!=2 && carga!=3)
                              {
                              printf("Su ropa se lavara durante 5 minutos");
                              }
                              else 
                              {
                                   if(carga!=1 && carga!=3)
                                  {
                                             printf("Su ropa se lavara durante 10 minutos");
                                    }
                              if(carga!=1 && carga!=2)
                              {
                                          printf("Su ropa se lavara durante 20 minutos");
                              }
                              }
                   }
                   else
                   {
                   printf("Opcion incorrecta");
                   }
		}
		if(kilos<=10)
		{
			printf("Su carga de ropa es minima \n");
			printf("Seleccione el tipo de ropa que desea lavar \n");
            printf("1.Delicada \n");
            printf("2.Normal \n");
            printf("3.Sucia \n");
            scanf("%d", &carga);
            if(carga>0 && carga<4)
                   {
                              if(carga!=2 && carga!=3)
                              {
                              printf("Su ropa se lavara durante 5 minutos");
                              }
                              else 
                              {
                                   if(carga!=1 && carga!=3)
                                  {
                                             printf("Su ropa se lavara durante 10 minutos");
                                    }
                              if(carga!=1 && carga!=2)
                              {
                                          printf("Su ropa se lavara durante 20 minutos");
                              }
                              }
                   }
                   else
                   {
                   printf("Opcion incorrecta");
                   }
		}
		if(kilos>20)
		{
			printf("Error. No puede lavar mas de 20 kilos de ropa");
		}
	//}	
}
