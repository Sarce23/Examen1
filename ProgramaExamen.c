#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Suma(int a,int b);
int Resta(int a,int b);
int Multiplicacion(int a,int b);
float Divicion(int a,int b);

int main()
{
	int a;
	int b;
	int Resultado1,Resultado2,Resultado3;
	float Resultado4;
	pintf("incerte 2 numeros enteros:");
	printf("inserte el primer numero:");
	scanf("%d"&a);
	printf("inserte el segundo numero:");
	scanf("%d"&b);

	Resultado1 = Suma(a,b);
	Resultado2 = Resta(a,b);
	Resultado3 = Multiplicacion(a,b);
	Resultado4 = Divicion(a,b);
	return 0;
}

int Suma(int a,int b)
{
	int resultado;
	resultado= a + b;
	return resultado;
}

int Resta(int a,int b)
{
	int resultado;
	resultado= a - b;
	return resultado;

}

int Multiplicacion(int a,int b)
{
	int resultado;
	resultado= a * b;
	return resultado;
}

float Divicion(int a,int b)
{
	int resultado;
	resultado= a / b;
	return resultado;
}