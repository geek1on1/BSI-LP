#include <stdio.h>

/*
Ler 1O elementos de uma matriz tipo vetor e apresentá-los.
*/

int main(void)
{
	int matriz[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, i;

	for(i = 0; i < 10; i++)
	{
		printf("Na posição %d da matriz está o valor %d\n", i, matriz[i]);
	}
	return 0;
}
