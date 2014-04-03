#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Elaborar um programa que apresente como resultado o valor de uma
potência de uma base qualquer elevada a um expoente qualquer, ou
seja, de BE, em que B é o valor da base e E o valor do expoente.
Considere apenas a entrada de valores inteiros e positivos.
*/

int main()
{
	int base, expoente;
	int pot = 1;
	printf("Digite um valor inteiro positivo para a base:\n");
	scanf("%d", &base);
	printf("Digite um valor inteiro positivo para o expoente:\n");
	scanf("%d", &expoente);
	if( expoente == 0 ) {
			printf("%d ^ %d = 1\n", base, expoente);
	} else {
		for (int i = 0; i <= expoente; i++)
		{
			printf("%d ^ %d = %d\n", base, expoente, pot *= base);
		}
	}
	return 0;
}