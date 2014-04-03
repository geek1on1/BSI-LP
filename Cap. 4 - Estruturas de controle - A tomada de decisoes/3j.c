#include <stdio.h>

/*
Ler um valor numérico inteiro e apresentar uma mensagem informando se
o valor numérico informado é par ou ímpar.
*/

int main()
{
	int num;
	
	printf("Digite um valor inteiro positivo para um número: \n");
	scanf("%d", &num);
	
	printf("--------------------------------------\n");
	if( num < 0 ) {
		printf("Não é permitido números abaixo de 0!\n");
	} else if ( num % 2 == 0) {
		printf("O número %d é par!\n", num);
	} else {
		printf("O número %d é ímpar!\n", num);
	}
	printf("--------------------------------------\n");
	return 0;
}