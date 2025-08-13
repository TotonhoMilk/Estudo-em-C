/*
| SÉRIE DE ESTUDOS EM LINGUAGEM C 
| 
| Realizado como um estudo para complemento da disciplina 
| de Algoritmo e Programação de Computadores I - para o 
| curso de Ciencia da Computação, no IESB, em Brasília.
|
| TRANSFORMA DA UNIDADE QUILOMETROS PARA MILHAS.
|
| Autor: Antônio Leite ; em 20/7/25
*/

#include <stdio.h>

float km_to_miles(float km);
float km_to_nautico(float km);

int main() {
	float start_km = 0;
	float step_km = 0;
	float end_km = 0;

	do
	{
		printf("Digite a distancia inicial --> ");
		scanf("%f", &start_km);
		getchar();
		if (start_km < 0)
			printf("Distancia inicial >= 0\n");
	} while (start_km < 0);

	do
	{
		printf("Digite os passo --> ");
		scanf("%f", &step_km);
		getchar();
		if (step_km < 0)
			printf("Os passos >= 0\n");
	} while (step_km < 0);
	
	do
	{
		printf("Digite a distancia final --> ");
		scanf("%f", &end_km);
		getchar();
		if (end_km < 0)
			printf("Distancia final >= 0\n");
	} while (end_km < 0);
	
	printf("\n\n\n");
	printf("%-15s%-15s%-15s\n", "Quilometro", "Milhas", "Nautico");
	printf("-------------------------------------\n");

	for (float current_km = start_km; current_km <= end_km; current_km += step_km) {
		printf("%-15.2f%-15.2f%-15.2f\n", current_km, km_to_miles(current_km), km_to_nautico(current_km));
	}
	return 0;
}

float km_to_miles(float km) {
	return km * 0.621371;
}

float km_to_nautico(float km) {
	return km * 0.539957;
}
