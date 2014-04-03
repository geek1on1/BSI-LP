#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Elaborar um programa que efetue a leitura de 15 valores numéricos inteiros 
e no final apresente o total do somatório da fatorial de cada valor lido.
*/

int main()
{
	int fatorial = 1,
		contador = 0,
		soma = 0,
		num = 0;

	while(contador < 15) {
		printf("Digite um número inteiro:\n");
		scanf("%d", &num);

		for(int i = num; i > 1; i--) {
			fatorial = fatorial * i;
		}

		// Guarda a soma das fatoriais;
		soma += fatorial;
		
		// Resetar as variáveis pros próximos números
		fatorial = 1;
		num = 0;

		contador++;
	}
	
	printf("A soma das fatoriais dos números digitados é: %d\n", soma);

	return 0;
}