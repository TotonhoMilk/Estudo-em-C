/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C
|
| Realizado como um estudo para complemento da disciplina
| de Algoritmo e Programação de Computadores I - para o
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| INVERTE OS VALORES DE UMA MATRIZ
|
| Autor: Antônio Leite ; em 30/6/25
*/

#include <stdio.h>

void reverse_array(int array[], int length);
void print_array(int array[], int length);

int main() {
  int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int array2[] = {1, 2, 3, 4, 5, 6};

  reverse_array(array1, 9);
  reverse_array(array2, 6);

  print_array(array1, 9);
  printf("---------------\n");
  print_array(array2, 6);

  return 0;
}

void reverse_array(int array[], int length) {
  for (int i = 0; i < (length / 2); i++) {
    int aux = array[i];
    array[i] = array[length - 1 - i];
    array[length - 1 - i] = aux;
  }
}

void print_array(int array[], int length) {
  for (int i = 0; i < length; i++) {
    printf("matriz[%d] = %d\n", i, array[i]);
  }
}
