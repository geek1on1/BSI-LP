#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Elaborar um programa que efetue a leitura sucessiva de valores numéricos
e apresente no final o total do somatório, a média e o total de valores lidos.
O programa deve fazer as leituras dos valores enquanto o usuário estiver
fornecendo valores positivos. Ou seja, o programa deve parar quando
o usuário fornecer um valor negativo (menor que zero).
*/

int main()
{
	int resposta = 0,
		soma = 0,
		num = 0,
		contador = 1;
	float media = 0;

	while(resposta >= 0) {
		printf("Digite um número inteiro:\n");
		scanf("%d", &num);
		
		// Condição de saída do loop
		if(num < 0) {
			break;
		} else {
			soma += num;
			media = soma / contador;
	 		contador++;
		}

	}
	
	printf("A soma dos números digitados é: %d\n", soma);
	printf("A média dos números digitados é: %.1f\n", media);

	return 0;
}