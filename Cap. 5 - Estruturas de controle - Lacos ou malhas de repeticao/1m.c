#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Elaborar um programa que efetue a leitura de 1O valores numéricos e
apresente no final o total do somatório e a média dos valores lidos.
*/

int main()
{
	int contador = 0,
		soma = 0,
		num = 0;
	float media = 0;

	while(contador < 10) {
		printf("Digite um número inteiro:\n");
		scanf("%d", &num);

		soma += num;
		contador++;
	}
	
	media = soma / 10;
	printf("A soma dos números digitados é: %d\n", soma);
	printf("A média dos números digitados é: %.1f\n", media);

	return 0;
}