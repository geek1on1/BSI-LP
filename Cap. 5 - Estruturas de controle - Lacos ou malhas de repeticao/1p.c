#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1p.c -Wall -std=c99

/*
Elaborar um programa que apresente os resultados da soma e da média
aritmética dos valores pares situados na faixa numérica de 50 a 70.
*/

int main()
{
	int soma = 0,
		contador = 50,
		pares = 1;
	float media = 0;

	while(contador <= 70) {
		if ( contador % 2 == 0 ) {
			soma += contador;
			media = soma / pares;
			pares++;
		}
		contador++;
	}
	printf("A soma dos inteiros pares entre 50 e 70 é igual a: %d\n", soma);
	printf("A média dos inteiros pares entre 50 e 70 é igual a: %.1f\n", media);
	return 0;
}