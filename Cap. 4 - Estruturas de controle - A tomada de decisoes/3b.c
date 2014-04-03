#include <stdio.h>

/*
Ler um valor numérico inteiro positivo ou negativo e apresentar o valor
lido como sendo um valor positivo, ou seja, se o valor lido for menor
ou igual a zero, ele deve ser multiplicado por -1 .
*/

int main()
{
	int num, mod;
	printf("Digite um número inteiro positivo ou negativo: \n");
	scanf("%d", &num);
	mod = num;
	if(num < 0) {
		mod = num * -1;
	}
	printf("O módulo do número: %d é igual a: %d\n", num, mod);
	return 0;
}