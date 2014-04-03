#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Elaborar um programa que apresente no final o somatório dos valores
pares existentes na faixa de 1 até 500.
*/
int main() {
	int soma = 0;

	for (int i = 1; i <= 500; i++)
	{
		if( i % 2 == 0 ) {
			soma += i;
		}
	}
	printf("A soma dos números pares positivos de 1 a 500 é igual a %d\n", soma);

	return 0;

}