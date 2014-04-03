#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1r.c -Wall -std=c99

/*
Elaborar um programa que efetue a leitura de valores positivos inteiros
até que um valor negativo seja informado. Ao final devem ser apresen­tados 
o maior e o menor valores informados pelo usuário.
*/

int main()
{
	int maior = 0,
		menor = 0,
		temp = 0,
		num = 0;

	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &temp);
	maior = temp;
	menor = temp;

	while(num >= 0) {
		printf("Digite um número inteiro positivo:\n");
		scanf("%d", &num);
		if( num < 0 ) { break; }
		if( num >= maior) { maior = num; }
		if( num <= menor) { menor = num; }
	}
	printf("O maior número é %d e o menor é %d\n", maior, menor);
	return 0;
}