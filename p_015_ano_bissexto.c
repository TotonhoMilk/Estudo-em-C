/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| DETERMINA SE O ANO É BISSEXTO
|
| Autor: Antônio Leite ; em 3/7/25
*/ 

#include <stdio.h>

int main()
{
    int ano = 0;
    do
    {
        printf("Insira o ano desejado: ");
        scanf("%d", &ano);
        if (ano < 0 || ano > 10000)
            printf("Ano devera ser > 0 e < 10.000\n");
    } while (ano < 0 || ano > 10000);

    if (ano % 4 && ano % 100 && ano % 400)
    {
        printf("\nO ano %d não eh bissexto!\n", ano);
    }
    else
    {
        printf("\nO ano %d eh bissexto!\n", ano);
    }
    
    switch ((ano % 4 && ano % 100 && ano % 400))
    {
      case 0:
        printf("False - Bissexto!\n");
        break;
      case 1:
        printf("True - nao Bissexto!\n");
        break;
    }

    return 0;
}
