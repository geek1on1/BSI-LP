#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Apresentar os quadrados dos números inteiros de 15 a 200
*/
int main() {

	for (int i = 15; i <= 200; i++)
	{
		printf("O quadrado de %d é igual à: %d\n", i, i * i);
	}

	return 0;

}