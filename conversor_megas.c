#include <stdio.h>
int mega;
int bit;
int byte;
int giga;
int tera;
int main()
{
    printf("Bienvenido. \n");
    printf("Este es un algoritmo que hace la conversión de megabytes (MB) a bits, bytes, gigabytes y terabytes. \n");
    printf("¿Cuántos MB desea convertir \n");
    scanf ("%d", & mega);
    bit=mega*8388608;
    byte=mega*1048576;
    giga=mega/1024;
    tera=giga/1024;
    printf("La conversión de MB a bits es de: %d \n", bit);
    printf("La conversión de MB a bytes es de: %d \n", byte);
    printf("La conversión de MB a gigabytes es de: %d \n", giga);
    printf("La conversión de MB a terabytes es de: %d \n", tera);
}
