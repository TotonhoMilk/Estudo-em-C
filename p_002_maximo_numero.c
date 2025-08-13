/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| ACHAR O MAIOR NÚMERO EM UMA MATRIZ
|
| Autor: Antônio Leite ; em 30/6/25
*/

#include<stdio.h>

int main()
{
    int numeros[] = {1,5,4,9,7,3};
    int numero = numeros[0];

    for (int i = 0; i < 6; i++)
    {
        printf("Checando numeros[%d] = %d\n", i, numeros[i]);
        if (numeros[i] > numero)
        {
            numero = numeros[i];
            printf("\nNovo maximo encontrado: %d\n\n", numero);
        }
    }

    printf("\nO maior numero: %d\n\n", numero);

    return 0;
}