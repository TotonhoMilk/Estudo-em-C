/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| REALIZA A CONTAGEM E ESCRITA DE UMA SÉRIE DE ANOS BISSEXTOS.
|
| Autor: Antônio Leite ; em 3/7/25
*/ 
#include <stdio.h>

void print_leap_year(int a1, int a2);

int main()
{
    print_leap_year(1912, 2054);

    return 0;
}

void print_leap_year(int a1, int a2)
{
    int count = 0;
    
    for (int i = a1; i < a2; i++)
    {
        if (!(i % 4 && i % 100 && i % 400))
        {
            count++;
        }
    }

    printf("\nLocalizados %d anos bissextos.\n", count);

    int ano[count];
    int j = 0;

    for (int i = a1; i < a2; i++)
    {
        if (!(i % 4 && i % 100 && i % 400))
        {
            ano[j] = i;
            j++;
        }
    }
    
    for (int i = 0; i < count; i++)
    {
        printf("%d", ano[i]);
        if (i < count - 1)
            printf(",");
        else
            printf("\n");
    }
}