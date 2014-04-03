#include <stdio.h>

/*
Elaborar um programa de computador que calcule e apresente o valor
da área de uma circunferência (variável A). Para tanto, o programa
deve solicitar o valor do raio (variável R) e fazer uso da fórmula de
cálculo: A <- 3.14159 * R^2.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	float a, raio;
	
	// Interação com o usuário: Obter o valor do raio
	printf("Digite o raio da circunferência em cm:");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &raio);
	
	// Processamento dos dados:
	a = 3.14159 * raio * raio;
	
	// Resposta ao usuário
	printf("A área dessa circunferência é de %.1f cm2.\n", a);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
