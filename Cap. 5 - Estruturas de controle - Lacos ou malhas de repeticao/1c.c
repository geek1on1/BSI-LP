#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Apresentar o total da soma obtida dos cem primeiros números inteiros
(1+2+3+4+5+6+7+ ... 97+98+99+100)
*/
int main() {
	int soma = 0;

	for (int i = 1; i <= 100; i++)
	{
		soma += i;
	}
	printf("A soma dos número inteiros positivos de 1 a 100 é igual a %d\n", soma);

	return 0;

}