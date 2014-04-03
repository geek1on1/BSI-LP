#include <stdio.h>

/*
Efetuar o cálculo da quantidade de litros de combustível gastos em uma
viagem, utilizando-se um automóvel que faz 12 Km por litro. Para obter
o cálculo, o usuário deverá fornecer o tempo gasto e a velocidade média
durante viagem. Desta forma, será possível obter a distância percorrida
com a fórmula DISTÂNCIA <- TEMPO * VELOCIDADE. Tendo o valor da distância, 
basta calcular a quantidade de litros de combustível utilizada na viagem com
a fórmula: LITROS_USADOS <- DISTÂNCIA/12 . O progra­ma deverá apresentar os 
valores da velocidade média, tempo gasto na viagem, a distância percorrida 
e a quantidade de litros utilizada na viagem.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	float tempo, velocidade_media, distancia, litros_usados;
	
	// Interação com o usuário: Obter o tempo gasto na viagem
	printf("Digite o tempo da viagem em horas:\nExemplo => 0.5 (meia hora) ou 3 (três horas):");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &tempo);
	
	// Interação com o usuário: Obter a velocidade média
	printf("Digite a velocidade média durante a viagem:\nExemplo => 100 (100 km/h):");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%f", &velocidade_media);
	
	/* Processamento dos dados:
	Acharemos primeiro a distância percorrida para depois calcularmos os litros usados:
	*/
	distancia = tempo * velocidade_media;
	litros_usados = distancia / 12;
	
	// Resposta ao usuário
	printf("Essa viagem consumiu %.1f litros de combustível\n", litros_usados);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
