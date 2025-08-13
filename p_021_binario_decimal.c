/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| CONVERTE UM NÚMERO BINARIO PARA DECIMAL. 
|
| Autor: Antônio Leite ; em 23/7/25
*/

// 3 2 1 0
// 1 0 1 1
//
// 1 * 2^0 = 1
// 1 * 2^1 = 2
// 0 * 2^2 = 0
// 1 + 2^3 = 8
//
// 1 + 2 + 0 + 8 = 11

#include <stdio.h>
#include <string.h>
#include <math.h>

int convert_binary(char *str);

int main() {
	char bin[11];

	printf("Digite um número binário (Max. 10 digitos - 2^10bits) --> ");
	scanf("%s", bin);
	while (getchar() != '\n');

	int result = convert_binary(bin);

	printf("O resultado e --> %d\n", result);

	return 0;
}

int convert_binary(char *str) {
	int slen = strlen(str);
	int soma = 0;
	
	for (int i = 0; i < slen; i++) {
		int num = str[slen - 1 - i] - '0';

		if (num)
			num = num * pow(2, i);

		soma = soma + num;
	} 
	return soma;
}
