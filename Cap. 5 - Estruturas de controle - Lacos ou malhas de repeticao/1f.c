#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Apresentar todos os números divisíveis por 4 que sejam menores que
200. Para verificar se o número é divisível por 4, efetuar dentro da
malha a verificação lógica desta condição com a instrução se,
perguntando se o número é divisível; sendo, mostre-o, não sendo,
passe para o próximo passo. A variável que controlará o contador
deverá ser iniciada com valor 1 .
*/

int main()
{
	for (int i = 1; i <= 200; i++)
	{
		if( i % 4 == 0 ) {
			printf("%d\n", i);
		}
	}
	return 0;
}