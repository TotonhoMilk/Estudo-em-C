/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C
|
| Realizado como um estudo para complemento da disciplina
| de Algoritmo e Programação de Computadores I - para o
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| RETIRA TODAS AS VOGAIS DE UMA STRING
|
| Autor: Antônio Leite ; em 28/7/25
*/

#include <stdio.h>
#include <string.h>

void vowels(char *str);

int main() {
  char s1[100];

  printf("Digite uma frase\n");
  printf("--> ");
  scanf("%[^\n]s", s1);
  while (getchar() != '\n')
    ;

  vowels(s1);
  printf("\n%s\n", s1);

  return 0;
}

void vowels(char *str) {
  int cur_pos = 0;
  int new_pos = 0;

  while (cur_pos < strlen(str)) {
    if (!(str[cur_pos] == 'a' || str[cur_pos] == 'A' || str[cur_pos] == 'e' ||
          str[cur_pos] == 'E' || str[cur_pos] == 'i' || str[cur_pos] == 'I' ||
          str[cur_pos] == 'o' || str[cur_pos] == 'O' || str[cur_pos] == 'u' ||
          str[cur_pos] == 'U')) {
      str[new_pos] = str[cur_pos];
      new_pos++;
    }
    cur_pos++;
  }
  str[new_pos] = '\0';
}
