#include <stdio.h>

/*
Ler 15 elementos de uma matriz A do tipo vetor. Construir uma matriz B de
mesmo tipo, observando a segui nte lei de formação: "Todo elemento de B
deverá ser o quadrado do elemento de A correspondente". Apresentar as
matrizes A e B.
*/

int main(void)
{
	int matrizA[15], matrizB[15], i;

	for(i = 0; i < 15; i++)
	{
		printf("Digite um valor inteiro para a posição %d da matriz A:\n", i);
		scanf("%d", &matrizA[i]);
		// Popula a matriz B com o quadrado dos valores da matriz A
		matrizB[i] = matrizA[i] * matrizA[i];
	}
	for(i = 0; i < 15; i++)
	{
		printf("Na posição %d da matriz A está o valor %d\n", i, matrizA[i]);
	}
	for (i = 0; i < 15; ++i)
	{
		printf("Na posição %d da matriz B está o valor %d\n", i, matrizB[i]);
	}
	return 0;
}
