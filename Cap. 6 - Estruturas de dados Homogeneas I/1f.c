#include <stdio.h>

/*
Ler duas matrizes A e B do tipo vetor com 15 elementos cada. Construir uma
matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C
deverá ter o dobro de elementos, ou seja, 30. Apresentar a matriz C.
*/
void criaMatriz(int array[], int i) {
	for(i = 0; i < 15; i++)
	{
		printf("Digite um valor inteiro para a posição %d da matriz:\n", i);
		scanf("%d", &array[i]);
	}
}

int main(void)
{
	int matrizA[15], matrizB[15], matrizC[30], i;

	criaMatriz(matrizA, i);
	criaMatriz(matrizB, i);

	for (i = 0; i < 30; i++)
	{
		matrizC[i] = ( i < 15 ) ? matrizA[i] : matrizB[ i - 15];
	}


	for(i = 0; i < 30; i++)
	{
		printf("Na posição %d da matriz C está o valor %d\n", i, matrizC[i]);
	}

	return 0;
}
