#include <stdio.h>

/*
Ler 8 elementos em uma matriz A tipo vetor. Construir uma matriz B de
mesma dimensão com os elementos da matriz A multiplicados por 3. 
O elemento 8[1] deverá ser implicado pelo elemento A[1] * 3, o elemento
8 [2] deverá ser implicado pelo elemento A[2] * 3 e assim por diante, até 8. Apresentar
a matriz B.
*/

int main(void)
{
	int matrizA[8], matrizB[8], i;

	for(i = 0; i < 8; i++)
	{
		printf("Digite um valor inteiro para a posição %d da matriz A:\n", i);
		scanf("%d", &matrizA[i]);
		// Popula a matriz B com os valores da matriz A vezes três
		matrizB[i] = matrizA[i] * 3;
	}
	for(i = 0; i < 8; i++)
	{
		printf("Na posição %d da matriz B está o valor %d\n", i, matrizB[i]);
	}
	return 0;
}
