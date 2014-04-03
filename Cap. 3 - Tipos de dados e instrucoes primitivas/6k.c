#include <stdio.h>

/*
Elaborar um programa que efetue a apresentação do valor da conversão
em real (R$) de um valor lido em dólar (US$). O programa deverá
solicitar o valor da cotação do dólar e também a quantidade de dólares
disponível com o usuário.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	float dolar, cotacao_do_dolar;
	
	// Interação com o usuário: Obter o valor em dólares
	printf("Digite o valor em dólares (US$):\nExemplo => 95.80 (US$ 95,80): ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &dolar);
	
	// Interação com o usuário: Obter a cotação do dólar
	printf("Digite a cotação do dia para o dólar (R$):\nExemplo => 2.3 (R$ 2,30): ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &cotacao_do_dolar);
	
	// Resposta ao usuário
	printf("Pela atual cotação do dólar, você tem R$ %.2f.\n", dolar * cotacao_do_dolar);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
