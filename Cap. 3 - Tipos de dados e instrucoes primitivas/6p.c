#include <stdio.h>

/*
Ler o valor correspondente ao salário mensal (variável SM) de um
trabalhador e também o valor do percentual de reajuste (variável PR)
a ser atribuído. Apresentar o valor do novo salário (variável NS).
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	float sm, pr, ns;
	
	// Interação com o usuário: Pedir o valor do salário mensal
	printf("Digite o valor do salário mensal em reais:\nExemplo => 870.40 (R$ 870,40):");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &sm);
	
	// Interação com o usuário: Pedir o percentual de reajuste
	printf("Digite o percentual de reajuste (sem a porcentagem):");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &pr);
	
	// Processamento dos dados:
	ns = sm + (sm * (pr/100));
	
	// Resposta ao usuário
	printf("O novo salário é igual à: R$ %.2f.\n", ns);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
