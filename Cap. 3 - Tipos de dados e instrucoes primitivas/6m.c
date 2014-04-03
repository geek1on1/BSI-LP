#include <stdio.h>

/*
Elaborar um programa que efetue a leitura de três valores inteiros
(representados pelas variáveis A, B e C) e apresente como resultado
final o valor da soma dos quadrados dos três valores lidos.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	int a, b, c, resposta;
	
	// Interação com o usuário
	printf("Digite um valor para A: ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%d", &a);
	
	// Interação com o usuário
	printf("Digite um valor para B: ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%d", &b);
	
	// Interação com o usuário
	printf("Digite um valor para C: ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%d", &c);
	
	// Processamento dos dados:
	resposta = a * a + b * b + c * c;
	
	// Resposta ao usuário
	printf("A soma dos quadrados dos números digitados é igual à: %d.\n", resposta);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
