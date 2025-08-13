/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| TRANSFORMA CELSIUS EM FAHRENHEIT
|
| Autor: Antônio Leite ; em 2/7/25
*/  

#include <stdio.h>

float celsius_to_fahrenheit(float temp);

int main()
{
    float celsius = 0;

    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fah = celsius_to_fahrenheit(celsius);

    printf("Celsius: %.2fºC, em Fahrenheit: %.2fºF\n", celsius, fah);

    return 0;
}

float celsius_to_fahrenheit(float temp)
{
    return (temp * 1.8) + 32;
}