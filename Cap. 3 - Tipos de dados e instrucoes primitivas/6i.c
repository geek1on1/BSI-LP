#include <stdio.h>

/*
Efetuar a leitura de um número inteiro e apresentar o resultado do
quadrado desse número.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	int numero;
	
	// Interação com o usuário
	printf("Digite o número a ser elevado ao quadrado: ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%d", &numero);
	
	// Resposta ao usuário
	printf("O quadrado do número %d é: %d\n", numero, numero * numero);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
