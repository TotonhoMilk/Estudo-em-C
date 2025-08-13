/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| PROCURA UM CARACTER NUMA STRING E SUBSTITUI POR OUTRO CARACTER
|
| Autor: Antônio Leite ; em 23/7/25
*/

#include <stdio.h>
#include <string.h>

void replace_char(char *str, char replace, char new);

int main() {
	char text[] = "esse eh o texto teste!";
	
	printf("Texto original ----> %s\n", text);

	replace_char(text, 'e', 'Z');

	printf("Texto modificado --> %s\n", text);

	return 0;
}

void replace_char(char *str, char replace, char new) {
	int slen = strlen(str);

	for (int i = 0; i < slen; i++) {
		if (str[i] == replace) {
			str[i] = new;
		}
	}
}

