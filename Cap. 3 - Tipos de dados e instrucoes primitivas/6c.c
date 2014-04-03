#include <stdio.h>

/*
Calcular e apresentar o valor do volume de uma lata de óleo, utilizando
a fórmula: VOLUME <- 3.14159 * R^2 * ALTURA.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	float volume, raio, altura;
	
	// Interação com o usuário: Pedir a altura da lata
	printf("Digite a altura da lata em centímetros:");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &altura);
	
	// Interação com o usuário: Pedir o raio da lata
	printf("Digite o raio da lata em centímetros:");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &raio);
	
	// Processamento dos dados:
	volume = 3.14159 * raio * raio * altura;
	
	// Resposta ao usuário
	printf("O volume dessa lata é igual à %.1f cm3.\n", volume);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
