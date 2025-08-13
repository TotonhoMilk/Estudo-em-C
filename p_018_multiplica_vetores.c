/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| REALIZA A MULTIPLICAÇÃO DE DOIS VETORES
|
| vi = (2,3,4)
| v2 = (3,2,1)
| res = (2 * 3) + (5 * 2) + (4 * 1) = 20
|
| Autor: Antônio Leite ; em 11/7/25
*/ 

#include <stdio.h>

float dot_vector(float v1[], float v2[], int length);

int main()
{
    float vec1[] = {2,5,4};
    float vec2[] = {3,2,1};

    float r = dot_vector(vec1, vec2, 3);

    printf("Resultado = %.2f\n", r);

    return 0;
}

float dot_vector(float v1[], float v2[], int length)
{
    float res[] = {0,0,0};

    for (int i = 0; i < length; i++)
    {
        res[i] = v1[i] * v2[i];
    }
    
    float resultado = 0;

    for (int i = 0; i < length; i++)
    {
        resultado = resultado + res[i];
    }

    return resultado;
}