#include <stdio.h>

/*
Elaborar um programa que calcule e apresente o volume de uma caixa
retangular, por meio da fórmula: VOLUME <- COMPRIMENTO * LARGURA * ALTURA.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	float volume, comprimento, largura, altura;
	
	// Interação com o usuário: Pedir a altura da caixa
	printf("Digite a altura da caixa em centímetros:");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &altura);
	
	// Interação com o usuário: Pedir a largura da caixa
	printf("Digite a largura da caixa em centímetros:");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &largura);
	
	// Interação com o usuário: Pedir o comprimento da caixa
	printf("Digite o comprimento da caixa em centímetros:");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &comprimento);
	
	// Processamento dos dados:
	volume = comprimento * altura * largura;
	
	// Resposta ao usuário
	printf("O volume dessa caixa é igual à %.1f cm3.\n", volume);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
