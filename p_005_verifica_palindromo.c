/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| VERIFICA SE A PALAVRA É PALINDROMO
|
| Autor: Antônio Leite ; em 1/7/25
*/

#include <stdio.h>
#include <string.h>

int is_palindrome(char string[]);

int main ()
{
    char string1[] = "palindrome";
    char string2[] = "abccba";
    char string3[] = "abcdcba";

    int check = is_palindrome(string3);

    switch (check)
    {
        case 0:
            printf("\nFALSO - Nao palindromo!\n");
            break;
        case 1:
            printf("\nVERDADE - Palindromo!\n");
            break;
    }

    printf("Resultado da funcao: %d\n", check);    

    return 0;
}

int is_palindrome(char string[])
{
    int middle = strlen(string) / 2;
    int lenght = strlen(string);

    for (int i = 0; i < middle; i++)
    {
        if (string[i] != string[lenght - i - 1])
        {
            return 0;
        }
        else 
        {
            return 1;
        }
    }
}