#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1s.c -Wall -std=c99

/*
Elaborar um programa que apresente o resultado inteiro da divisão de
dois números quaisquer. Para a elaboração do programa, não utilizar
em hipótese alguma o conceito do operador aritmético DIV. A solução
deve ser alcançada com a utilização de looping. Ou seja, o programa
deve apresentar como resultado (quociente) quantas vezes o divisor
cabe no dividendo.
*/

int main()
{
	int dividendo = 0,
		divisor = 0,
		quociente = 0,
		num = 0;

	printf("Digite um número inteiro positivo para ser o dividendo:\n");
	scanf("%d", &dividendo);
	num = dividendo;
	printf("Digite um número inteiro positivo para ser o divisor:\n");
	scanf("%d", &divisor);
	
	//Enquanto X for maior que Y faça X = X - Y e D = D + 1; 
	if(divisor == 0) {
		printf("Não é possível a divisão por zero!\n");
		return 0;
	} else if( dividendo < divisor ) {
		printf("%d dividido por %d é igual a 0\n", dividendo, divisor);
		return 0;
	} else {
		while( dividendo >= divisor ) {
			dividendo -= divisor;
			quociente++;
		}
	}
	printf("%d dividido por %d é igual a %d\n", num, divisor, quociente);
	return 0;
}