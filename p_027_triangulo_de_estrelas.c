/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| DESENHA UM TRIANGULO DE ESTRELAS. 
|
| Autor: Antônio Leite ; em 24/7/25
*/

#include <stdio.h>

int main() 
{
	int tam = 0;

	do
	{
		printf("Qual o tamanho da estrela --> ");
		scanf("%d", &tam);
		if (tam < 1)
			printf("Tamanho da estrela > 0\n");
	} while (tam < 1);
	
	printf("\n\n");

	for (int i = 1; i <= tam; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
