#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Apresentar os resultados de uma tabuada de um número qualquer, a qual deve ser impressa
no seguinte formato:

Considerando como exemplo o fornecimento do número 2 para o número qualquer,
ter-se-ia a seguinte situação:

2 X 1 = 2
2 X 2 = 4
2 X 3 = 6
(...)
2 X 10 = 20

*/
int main() {

	int num;
	printf("Digite um número inteiro positivo: \n");
	scanf("%d", &num);

	for (int i = 1; i <= 10; i++)
	{
		printf("%d X %d = %d\n", num, i, num * i);
	}

	return 0;

}