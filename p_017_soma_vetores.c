/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| REALIZA A SOMA DE DOIS VETORES
|
| vi = (2,3,4)
| v2 = (3,2,1)
| res = v1 + v2 = (5,7,5)
|
| Autor: Antônio Leite ; em 11/7/25
*/ 

#include <stdio.h>

void vector_add(float v1[], float v2[], float res[], int length);
void print_vector(float res[], int length);

int main() 
{
    float vec1[] = {2,5,4};
    float vec2[] = {3,2,1};
    float res[] = {0,0,0};

    vector_add(vec1, vec2, res, 3);
    print_vector(res, 3);

    return 0;
}

void vector_add(float v1[], float v2[], float res[], int length)
{
    for (int i = 0; i < length; i++)
    {
        res[i] = v1[i] + v2[i];
    }
}

void print_vector(float res[], int length)
{
    printf("(");
    for (int i = 0; i < length; i++)
    {
        printf("%.2f", res[i]);
        if (i != length - 1)
            printf(",");
    }
    printf(")\n");
}