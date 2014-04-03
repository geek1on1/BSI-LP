#include <stdio.h>

/*
Elaborar um programa de computador que efetue a leitura de quatro
valores inteiros (variáveis A, B, C e D). Ao final o programa deve
apresentar o resultado do produto (variável P) do primeiro com o
terceiro valor, e o resultado da soma (variável S) do segundo com o
quarto valor.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	int a, b, c, d, p, s;
	
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
	
	// Interação com o usuário
	printf("Digite um valor para D: ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%d", &d);
	
	// Processamento dos dados:
	p = a * c;
	s = b + d;
	
	// Resposta ao usuário
	printf("O produto do primeiro e terceiro números digitados é igual à: %d.\n", p);
	printf("A soma do segundo e quarto números digitados é igual à: %d.\n", s);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
