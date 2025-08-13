/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| SIMULA DADOS COM NÚMEROS ALEATÓRIOS.
|
| Autor: Antônio Leite ; em 3/7/25
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int quant = 0;
    int jogada = 0;
    int soma = 0;

    do
    {
        printf("Quantas vezes deseja jogar os dados: ");
        scanf("%d", &quant);
        if (quant < 0 || quant > 15)
        {
            printf("O numero devera ser > 0 e < 15.\n");
        }
    } while (quant < 0 || quant > 15);

    srand(time(NULL));

    int i = 0;
    while (i < quant)
    {
        jogada = rand() % 7;
        if (jogada == 0)
            continue;
        soma = soma + jogada;
        printf("Dado %02d --> %02d\n", i + 1, jogada);
        i++;
    }

    printf("--------------\n");
    printf("Soma    --> %02d\n\n", soma);

    return 0;
}