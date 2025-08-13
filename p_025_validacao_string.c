/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| VERIFICA SE A STRING ESTÁ CORRETA.
|
| Autor: Antônio Leite ; em 24/7/25
*/

// FORMATO DA STRING --> L3D S2L
// LETRA --> NUMERO --> LETRA --> ESPAÇO --> LETRA --> NUMERO --> LETRA
// TAMANHO 7 CARACTERES.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool is_valide(char *str);

int main() {
	char str[] = "L3D S2L";

	if (is_valide(str))
		printf("---> %s esta valido!\n", str);
	else
		printf("---> %s invalido!\n", str);

	return 0;
}

bool is_valide(char *str) {
	if (strlen(str) != 7)                     return false;
	if (!isalpha(str[0]) || !isupper(str[0])) return false;
	if (!isdigit(str[1]))                     return false;
	if (!isalpha(str[2]) || !isupper(str[2])) return false;
	if (str[3] != ' ')                        return false;
	if (!isalpha(str[4]) || !isupper(str[4])) return false;
	if (!isdigit(str[5]))                     return false;
	if (!isalpha(str[6]) || !isupper(str[6])) return false;

	return true;
}
