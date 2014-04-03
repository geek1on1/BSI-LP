#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Elaborar um programa que efetue o cálculo e no final apresente o
somatório do número de grãos de trigo que se pode obter num tabuleiro
de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no
primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou
seja, no primeiro quadro coloca-se 1 grão, no segundo quadro colocam­-se 2 grãos
(neste momento têm-se 3 grãos), no terceiro quadro colocam-se 4 grãos
(tendo neste momento 7 grãos), no quarto quadro colocam-se 8 grãos
(tendo-se então 15 grãos) até atingir o sexagésimo quarto quadro
*/

int main()
{
	// Foi necessário utilizar unsigned long (sem sinal e longo) para
	// descrever o resultado. Se for um int normal, daria estouro de memória...
	unsigned long int quadro = 1,
		soma = 1;
	int contador = 1;

	while(contador < 64) {
		quadro *= 2;
		soma += quadro;
		contador++;
	}
	
	// Vai imprimir 18446744073709551615
	printf("%lu\n", soma);

	return 0;
}