#include <stdio.h>

/*
Efetuar o cálculo e a apresentação do valor de uma prestação em
atraso, utilizando a fórmula: PRESTAÇÃO <- VALOR + (VALOR * (TAXA /100) * TEMPO).
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	float prestacao, valor, taxa;
	int tempo; // Consideramos 3 dias, 5 meses, 1 ano...
	
	// Interação com o usuário: Obter o valor antigo da prestação
	printf("Digite o valor da prestação a ser recalculado em reais:\nExemplo => 200.95 (R$ 295,00): ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &valor);
	
	// Interação com o usuário: Obter o valor da taxa por atraso
	printf("Digite o percentual da taxa sem a porcetagem:");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &taxa);
	
	// Interação com o usuário: Por fim, obter o tempo de atraso
	printf("Digite o tempo de atraso da prestação em dias:");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%d", &tempo);
	
	// Processamento dos dados:
	prestacao = valor + (valor * (taxa/100) * tempo);
	
	// Resposta ao usuário
	printf("O valor da sua prestação atualizada é de R$ %.2f\n", prestacao);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
