/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| ACHAR O MENOR NÚMERO EM UMA MATRIZ
|
| Autor: Antônio Leite ; em 29/6/25
*/

#include <stdio.h>

int main()
{
    int numeros[6] = {-1, 7, -7, 9, -22, 0};
    int minimo = 0;

    minimo = numeros[0];

    for (int i = 0; i < 6; i++)
    {
        printf("Checando numeros[%d] = %d\n", i, numeros[i]);
        if (numeros[i] < minimo)
        {
            minimo = numeros[i];
            printf("\nNovo minino encontrado: %d\n\n", minimo);
        }
    }

    printf("\nO menor numero: %d\n\n\n", minimo);

    return 0;
}