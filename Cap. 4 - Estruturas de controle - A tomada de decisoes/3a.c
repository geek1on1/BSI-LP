#include <stdio.h>

/*
Ler dois valores numéricos inteiros e apresentar o resultado da diferença 
do maior valor pelo menor valor.
*/

int main()
{
	int a, b, diferenca;
	printf("Digite um número inteiro para A:\n");
	scanf("%d", &a);
	printf("Digite um número inteiro para B:\n");
	scanf("%d", &b);
	if(a >= b) {
		diferenca = a - b;
		printf("A diferença de %d - %d é igual a: %d\n", a, b, diferenca);
		return 0;
	} else {
		diferenca = b - a;
		printf("A diferença de %d - %d é igual a: %d\n", b, a, diferenca);
		return 0;
	}
}
