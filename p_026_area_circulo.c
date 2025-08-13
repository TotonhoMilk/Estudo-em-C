/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| CALCULA A ÁREA DE UM CIRCULO - RAIO DADO. 
|
| Autor: Antônio Leite ; em 24/7/25
*/

#include <stdio.h>

// #define PI 3.14159

float area_circle(float radius);

int main()
{
	float raio = 0.0;

	printf("Digite o raio do circulo --> ");
	scanf("%f", &raio);

	printf("\n\nA area do circulo de raio %.2fuc --> %.2fua\n", raio, area_circle(raio));

	return 0;
}

float area_circle(float radius) 
{
	return PI * (radius * radius);
}
