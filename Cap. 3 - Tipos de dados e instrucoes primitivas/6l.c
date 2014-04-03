#include <stdio.h>

/*
Elaborar um programa que efetue a apresentação do valor da conversão
em dólar (US$) de um valor lido em real (R$). O programa deverá
solicitar o valor da cotação do dólar e também a quantidade de reais
disponível com o usuário.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	float reais, cotacao_do_dolar;
	
	// Interação com o usuário: Obter o valor em reais
	printf("Digite o valor em reais (R$):\nExemplo => 95.80 (R$ 95,80): ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &reais);
	
	// Interação com o usuário: Obter a cotação do dólar
	printf("Digite a cotação do dia para o dólar (R$):\nExemplo => 2.3 (R$ 2,30): ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &cotacao_do_dolar);
	
	// Resposta ao usuário
	printf("Pela atual cotação do dólar, você tem US$ %.2f.\n", reais / cotacao_do_dolar);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
