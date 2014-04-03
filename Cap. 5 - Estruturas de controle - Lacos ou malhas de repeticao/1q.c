#include <stdio.h>
#include <string.h> // Manipula strings (conjunto de caracteres)

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1q.c -Wall -std=c99

/*
Elaborar um programa que possibilite calcular a área total de uma residência
(sala, cozinha, banheiro, quartos, área de serviço, quintal, garagem, etc.).
O programa deve solicitar a entrada do nome, a largura e o comprimento de um 
determinado cômodo. Em seguida, deve apresentar a área do cômodo lido e também 
uma mensagem solicitando do usuário a confirmação de continuar calculando novos cômodos.
Caso o usuário responda " NÃO", o programa deve apresentar o valor total
acumulado da área residencial.
*/

int main()
{
	float largura = 0,
		  altura = 0,
		  area = 0,
		  areaTotal = 0;
	char comodo[25], // Declarando a quantidade máxima de caracters
		 resposta[1] = {'s'}; // Declarando o caractere-base da string

	/* 
	A função strcmp compara duas strings e retorna:
	0: Caso sejam idênticas;
	1: Caso a primeira seja maior que a segunda, e;
	-1: Caso a segunda seja maior que a primeira.
	No nosso caso, qualquer coisa diferente de 0, força a saída do laço.	
	*/
	while(strcmp(resposta, "s") == 0) {
		printf("Digite o nome do cômodo a ser calculado:\n");
		// Guardando o resultado com string na variável comodo
		// Notem que não precisamos do ampersand (& comercial) antes do nome
		// da variável 
		scanf("%s", comodo);
		printf("Digite a largura do cômodo em metros (Ex: 3.5):\n");
		scanf("%f", &largura);
		printf("Digite a altura do cômodo em metros (Ex: 3.5):\n");
		scanf("%f", &altura);
		
		area = altura * largura;
		areaTotal += area;
		printf("Continuar a calcular novos cômodos? [s/n]\n");
		scanf("%s", resposta);
	}
	printf("A área total de sua residência é: %.1f m3.\n", areaTotal);
	return 0;
}