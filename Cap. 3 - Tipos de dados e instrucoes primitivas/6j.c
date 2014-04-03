#include <stdio.h>

/*
Ler dois valores inteiros (variáveis A e B) e apresentar o resultado do
quadrado da diferença do primeiro valor (variável A) pelo segundo valor
(variável B).
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	int a, b, diferenca_ao_quadrado;

	// Interação com o usuário: Obter o valor de A
	printf("Digite o valor inteiro para A: ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%d", &a);
	
	// Interação com o usuário: Obter o valor de B
	printf("Digite o valor inteiro para B: ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%d", &b);
	
	// Processamento dos dados:
	diferenca_ao_quadrado = (a - b) * (a - b);
	
	// Resposta ao usuário
	printf("O quadrado da diferença de A por B é igual à: %d\n", diferenca_ao_quadrado);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
