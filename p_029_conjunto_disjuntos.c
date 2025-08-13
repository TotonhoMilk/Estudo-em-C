/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C
|
| Realizado como um estudo para complemento da disciplina
| de Algoritmo e Programação de Computadores I - para o
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| VERIFICA SE OS CONJUNTOS SÃO DISJUNTOS
|
| Autor: Antônio Leite ; em 28/7/25
*/

#include <stdbool.h>
#include <stdio.h>

bool is_disjunto(int a1[], int l1, int a2[], int l2);

int main() {
  int a1[] = {1, 3, 5, 7, 9};
  int a2[] = {2, 4, 6, 8, 10};

  if (is_disjunto(a1, 5, a2, 5)) {
    printf("Os conjuntos sao disjuntos\n");
  } else {
    printf("Os conjuntos nao sao disjuntos\n");
  }

  return 0;
}
// TODO: fazer isso
bool is_disjunto(int a1[], int l1, int a2[], int l2) {
  for (int i = 0; i < l1; i++) {
    for (int j = 0; j < l2; j++) {
      if (a1[i] == a2[j])
        return false;
    }
  }
  return true;
}
