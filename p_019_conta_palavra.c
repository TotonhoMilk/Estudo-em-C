/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| VERIFICA A OCORRÊNCIA DE UMA PALAVRA EM UMA FRASE.
|
| Autor: Antônio Leite ; em 20/7/25
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int word_count( char *string, char *word );

int main()
{
	char str[] = "essa que string vamos que procurar a que palavra.";
	char wor[] = "que";

	int result = word_count(str, wor);

	printf("\n\t%s", str);
	printf("\n\tA palavra \"%s\" foi encontrada %d vez(es)\n", wor, result);

	return 0;
}

int word_count( char *string, char *word )
{
	int slen = strlen(string);
	int wlen = strlen(word);
	int end = slen - wlen + 1;
	int count = 0;

	for (int i = 0; i < end; i++)
	{
		int word_found = true;
		for (int j = 0; j < wlen; j++)
		{
			if(word[j] != string[i + j])
			{
				word_found = false;
				break;
			}
		}

		if (word_found)
		{
			count++;
		}
	}
	return count;
}

