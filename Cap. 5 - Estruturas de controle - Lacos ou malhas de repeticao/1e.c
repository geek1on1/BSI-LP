#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Apresentar todos os valores numéricos inteiros ímpares situados na faixa de O a 20.
Para verificar se o número é ímpar, efetuar dentro da malha a verificação lógica desta
condição com a instrução se, perguntando se o número é ímpar; sendo, mostre-o, não sendo,
passe para o próximo passo.
*/

int main()
{
	for (int i = 0; i <= 20; i++)
	{
		if(!( i % 2 == 0)) {
			printf("%d\n", i);
		}
	}
	return 0;
}