#include <stdio.h>

/*
Ler uma matriz A do tipo vetor com 15 elementos. Construir uma matriz B
de mesmo tipo, sendo que cada elemento da matriz B seja o fatorial do
elemento correspondente da matriz A. Apresentar as matrizes A e B .
*/

int main(void)
{
	int matrizA[15], matrizB[15], i, j, fatorial = 1;

	for(i = 0; i < 15; i++)
	{
		printf("Digite um valor inteiro para a posição %d da matriz A:\n", i);
		scanf("%d", &matrizA[i]);
	}
	for (i = 0; i < 15; i++)
	{
		// Fatorial
		for (j = matrizA[i]; j > 1 ; j--)
		{
			fatorial *= j;
		}
		// Popula a matriz B com a fatorial de A e reseta a variável fatorial para 1
		matrizB[i] = fatorial;
		fatorial = 1;
	}


	for(i = 0; i < 15; i++)
	{
		printf("Na posição %d da matriz A está o valor %d\n", i, matrizA[i]);
	}
	
	for (i = 0; i < 15; i++)
	{
		printf("Na posição %d da matriz B está o valor %d\n", i, matrizB[i]);
	}
	return 0;
}
