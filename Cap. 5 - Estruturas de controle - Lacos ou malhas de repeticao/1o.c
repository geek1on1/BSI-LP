#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Elaborar um programa que apresente como resultado o valor da
fatorial dos valores ímpares situados na faixa numérica de 1 a 1O.
*/

int main()
{
		int fatorial = 1,
		contador = 1;

	while(contador <= 10) {
		if ( contador % 2 != 0 ) {
			for(int i = 1; i <= contador; i++) {
				fatorial *= i;
			}
			printf("Fatorial de %d => %d\n", contador, fatorial);
			fatorial = 1;
		}
		contador++;
	}
	return 0;
}