/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| REMOVE TODAS A S OCORRÊNCIAS DE UMA LETRA EM UMA FRASE.
|
| Autor: Antônio Leite ; em 20/7/25
*/

// 0123456789
// PALAVRA LETRA
// PAAVRA ETRA

#include <stdio.h>
#include <string.h>

void delete_char( char *string, char c );

int main()
{
	char str[] = "palavra letra";
	char c = 'a';
	
	printf("A string \"%s\" sem a letra \'%c\'--> ", str, c);

	delete_char(str, c);

	printf("%s\n", str);

	return 0;
}

void delete_char( char *string, char c )
{
	int count = 0;

	for (int i = 0; i < strlen(string); i++)
	
	{
		if (string[i + count] == c)
			count++;
		string[i] = string[i + count];
	}
}
