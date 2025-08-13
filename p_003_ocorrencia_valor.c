/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| NÚMERO DE OCORRÊNCIAS DE UM VALOR EM UMA MATRIZ
|
| Autor: Antônio Leite ; em 30/6/25
*/

#include <stdio.h>

int main()
{
    int numeros[] = {1,5,4,6,7,8,5,1,5};
    int cont = 0;
    int ocorrencia = 5;

    for (int i = 0; i < 9; i++)
    {
        printf("Checando o numeros[%d] = %d\n", i, numeros[i]);
        if (numeros[i] == ocorrencia)
        {
            cont++;
            printf("\nO numeros[%d] == %d\n", i, ocorrencia);
            printf("Contador = %d\n\n", cont);
        }
    }

    printf("\nO numero %d apareceu %d vezes.\n", ocorrencia, cont);

    return 0;
}