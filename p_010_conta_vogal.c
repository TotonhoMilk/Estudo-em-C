/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| CONTA QUANTAS VOGAIS TEM UMA STRING
|
| Autor: Antônio Leite ; em 3/7/25
*/ 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowel(char *s);

int main()
{
    char str1[] = "It's A wonderfUl life!";
    // I, a, o, e, u, i, e = 7 vogais

    int contador = 0;

    for (int i = 0; i < strlen(str1); i++)
    {
        switch (tolower(str1[i]))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                contador++;
                break;
        }
    }
    printf("\nResposta direta:\n");
    printf("A quantidade de vogais na frase e: %d vogais\n", contador);

    printf("\nResposta por funcao:\n");
    printf("A quantidade de vogais na frase e: %d vogais\n", count_vowel(str1));

    return 0;
}

int count_vowel(char *s)
{
    int contador = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        switch (tolower(s[i]))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                contador++;
                break;
        }
    }
    return contador;
}