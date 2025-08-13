/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| TROCA TODAS AS LETRAS DE UMA STRING PARA MAIUSCULA OU MINUSCULA.
|
| Autor: Antônio Leite ; em 3/7/25
*/ 

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void lower_upper(char *s);

int main()
{
    char str1[] = "string in lowercase";
    char str2[] = "STRING IN UPPERCASE";
    char str3[] = "StinG wItH CrZY VoWElS!";

    printf("\nStrings originais:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);

    lower_upper(str1);
    lower_upper(str2);

    printf("\nString apos alteracao:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);

    printf("\nString sem alteracao:\n");
    printf("%s\n", str3);

    lower_upper(str3);
    
    printf("\nString com alteracao:\n");
    printf("%s\n", str3);

    return 0;
}

void lower_upper(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (islower(s[i]))
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }
}