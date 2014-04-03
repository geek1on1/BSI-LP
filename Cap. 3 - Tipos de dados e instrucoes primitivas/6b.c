#include <stdio.h>

/*
Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius.
A fórmula de conversão é: C <- (F - 32) * (5/9), sendo F a temperatura em
Fahrenheit e C a temperatura em Celsius.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	float celsius, farenheit;
	
	// Interação com o usuário
	printf("Digite a temperatura em graus Farenheit:");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &farenheit);
	
	/* Processamento dos dados:
	Podemos converter a temperatura dada em farenheit para celsius de duas formas:
	1.	C = (F - 32) * (5 / 9)
	2.	C = F - 32 / 1.8
	Fica a seu critério a forma de calcular...
	*/
	celsius = (farenheit - 32) / 1.8;
	
	// Resposta ao usuário
	printf("%.1f graus Farenheit é equivalente à %.1f graus Celsius.\n", farenheit, celsius);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
