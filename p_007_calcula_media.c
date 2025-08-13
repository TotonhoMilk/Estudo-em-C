/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| CALCULA A MEDIA DOS VALORES DE UMA MATRIZ
|
| Autor: Antônio Leite ; em 1/7/25
*/  

#include <stdio.h>

float calc_average(float numero[], int tamanho);

int main()
{
  float numero[] = {5.4, 6.3, 7.9, 4.2};
  int tamanho = sizeof(numero) / sizeof(numero[0]); // número de elementos do array

  float media = calc_average(numero, tamanho);

  printf("\nA media: %.2f\n\n", media);

  return 0;
}

float calc_average(float numero[], int tamanho)
{
  float soma = 0;

  for (int i = 0; i < tamanho; i++)
  {
    soma = soma + numero[i];
  }

  return soma / tamanho;
}
