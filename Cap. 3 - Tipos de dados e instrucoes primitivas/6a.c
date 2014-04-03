#include <stdio.h>

/*
Ler uma temperatura em graus Celsius e apresentá-la convertida em
graus Fahrenheit. A fórmula de conversão é: F <- (9* C + 1 60) / 5, sendo
F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	float celsius, farenheit;
	
	// Interação com o usuário
	printf("Digite a temperatura em graus Celsius:");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &celsius);
	
	/* Processamento dos dados:
	Podemos converter a temperatura dada em celsius para farenheit de duas formas:
	1.	F = (9 * C + 160) / 5
	2.	F = C * 1.8 + 32
	Fica a seu critério a forma de calcular...
	*/
	farenheit = celsius * 1.8 + 32;
	
	// Resposta ao usuário
	printf("%.1f graus Celsius é equivalente à %.1f graus Farenheit.\n", celsius, farenheit);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
