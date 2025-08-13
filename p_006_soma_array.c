/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| SOMA OS VALORES DE UMA MATRIZ
|
| Autor: Antônio Leite ; em 1/7/25
*/

#include <stdio.h>

int main()
{
    int num[] = {1,3,5,5,3,5,3,2,7,6,2,1,1,3,5,5,3,5,3,2,7,6,2,1};
    int cont = 0;
    int soma = 0;

    while (num[cont] != '\0')
    {
        cont++;
    }
    printf("\nNumero de elementos: %d\n", cont);

    for (int i = 0; i < cont; i++)
    {
        soma = soma + num[i];
    }
    printf("O resultado da soma: %d\n", soma);

    return 0;
}