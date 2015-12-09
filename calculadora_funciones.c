#include<stdio.h>
int s;
int r;
int m;
int d;
int n1;
int n2;
int suma(int n1, int n2)
{
	s=n1+n2;
	return s;
}
int resta(int n1, int n2)
{
	r=n1-n2;
	return r;
}
int multiplicacion(int n1, int n2)
{
	m=n1*n2;
	return m;
}
int division(int n1, int n2)
{
	d=n1/n2;
	return d;
}
int main()
{
	printf("Calculadora que realiza las operaciones basicas con dos cantidades asignadas por el usuario \n");
	printf("Ingrese la primera cantidad: ");
	scanf("%d", &n1);
	printf("Ingrese la segunda cantidad: ");
	scanf("%d", &n2);
	s=suma(n1, n2);
	printf("El resultado de la suma es: ");
	printf("%d \n", s);
	r=resta(n1, n2);
	printf("El resultado de la resta es: ");
	printf("%d \n", r);
	m=multiplicacion(n1, n2);
	printf("El resultado de la multiplicacion es: ");
	printf("%d \n", m);
	d=division(n1, n2);
	printf("El resultado de la division es: ");
	printf("%d \n", d);
}
