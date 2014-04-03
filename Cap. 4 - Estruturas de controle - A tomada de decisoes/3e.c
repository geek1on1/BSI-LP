#include <stdio.h>
// Para usar a função sqrt(), que calcula a raiz quadrada de um número,
// incluimos a biblioteca math.h e para compilar o programa, devemos usar
// as seguintes flags: gcc -o eq2grau 3e.c -Wall -lm
#include <math.h>

/*
Ler três valores numéricos (representados pela variáveis A, B e C) e efetuar
o cálculo da equação completa de segunda grau, utilizando a fórmula de
Baskara (considerar todas as possíveis condições para delta: delta < O, delta
> O e delta = 0). Lembre-se de que é completa a equação de segundo grau
que possui simultaneamente as variáveis A, B e C diferentes de zero.
*/

int main()
{
	int a, b, c, delta;
	float x1, x2;

	printf("Digite o valor de A: \n");
	scanf("%d", &a);
	printf("Digite o valor de B: \n");
	scanf("%d", &b);
	printf("Digite o valor de C: \n");
	scanf("%d", &c);
	
	if( a == 0 ) {
		printf("A equação é inválida! O termo A tem que ser diferente de 0...\n");
		return 0;
	}

	delta = (b * b) - (4 * a * c);

	if (delta < 0) {
		printf("Delta não pode ser menor que 0! São raízes complexas...\n");
		return 0;
	} 

	x1 = (-b - sqrt(delta)) / (2 * a);
	x2 = (-b + sqrt(delta)) / (2 * a);
	
	printf("---------------------------\n");
	printf("Eis o resultado da equação:\nX' = %.1f,\nX\" = %.1f.\n", x1, x2);
	printf("---------------------------\n");
	return 0;
}