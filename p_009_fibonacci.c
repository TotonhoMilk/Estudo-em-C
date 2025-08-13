/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| CALCULA A SEQUÊNCIA DE FIBONACCI
|
| Autor: Antônio Leite ; em 2/7/25
*/  

/*
Solução interativa
f1 = 0
f2 = 1
f3 = 1
f4 = 2
f5 = 3
f6 = 5
(...)
*/

/*
Solução recursiva
f[0] = 0
f[1] = 1

f[n] = f[n -1] + f[n - 2]
f[2] = f[1] + f[0]
     =   1  +   0  = 1

f[3] = f[2] + f[1]
     =  1   +  1   = 2

f[4] = f[3] + f[2]
     =  2   +  1   = 3 

(...)
*/


#include <stdio.h>

unsigned long int fibonacci(int n);

int main()
{
    unsigned long int f1 = 0;
    unsigned long int f2 = 1;
    unsigned long int fn = 0;
    int lenght = 0;

    do
    {
        printf("Digite o tamanho da sequencia: ");
        scanf("%d", &lenght);

        if (lenght <= 3)
        {
            printf("Digite tamanho > 3\n");
        }
    } while (lenght < 3);

    printf("\nSolucao interativa!\n");
    printf("{%d,%d,", f1, f2);

    for (int i = 2; i < lenght; i++)
    {
        fn = f1 + f2;
        printf("%lu", fn);

        f1 = f2;
        f2 = fn;

        if (i != lenght - 1)
            printf(",");
        else
            printf("}\n");
    }

    printf("\nSolucao recursiva!\n");
    printf("{");

    for (int i = 0; i < lenght; i++)
    {
        printf("%lu", fibonacci(i));

        if (i != lenght - 1)
            printf(",");
        else
            printf("}\n");
    }
  
    return 0;
}

unsigned long int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if(n > 1)
        return fibonacci(n - 1) + fibonacci(n - 2);
    else
    {
        printf("O tamanho da sequencia > 0.\n");
        return -1;
    }
}