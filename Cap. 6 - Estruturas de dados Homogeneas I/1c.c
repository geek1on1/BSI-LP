#include <stdio.h>

/*
Ler duas matrizes A e B do tipo vetor com 20 elementos. Construir uma
matriz C, onde cada elemento de C é a subtração do elemento
correspondente de A com B. Apresentar a matriz C.
*/

int main(void)
{
	int matrizA[20], matrizB[20], matrizC[20], i;

	for(i = 0; i < 20; i++)
	{
		printf("Digite um valor inteiro para a posição %d da matriz A:\n", i);
		scanf("%d", &matrizA[i]);
		printf("Digite um valor inteiro para a posição %d da matriz B:\n", i);
		scanf("%d", &matrizB[i]);
		// Popula a matriz C com a subtração dos valores da matriz A por B
		matrizC[i] = matrizA[i] - matrizB[i];
	}
	for(i = 0; i < 20; i++)
	{
		printf("Na posição %d da matriz C está o valor %d\n", i, matrizC[i]);
	}
	return 0;
}
