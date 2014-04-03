#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Apresentar os resultados das potências de 3, variando do expoente O
até o expoente 15. Deve ser considerado que qualquer número ele­vado a zero é 1, 
e elevado a 1 é ele próprio. Deverá ser apresentado, observando a seguinte definição:
30 = 1
3¹ = 3
3² = 9
( ..)
.
315 = 14348907
*/

int main()
{
	int pot = 1;
	int num = 3;
	for (int i = 0; i <= 15; i++)
	{
		if( i == 0 ) {
			printf("3 ^ 0 = 1\n");
		} else {
			// Potência cumulativa: Supomos que num seja 3 e pot = 1, teremos:
			// pot = 1 * 3 no primeiro loop - pot = 3
			// pot = 3 * 3 no segundo loop - pot = 9
			// pot = 9 * 3 no terceiro loop - pot = 27
			// pot = 27 * 3 no quarto loop - pot = 81
			// E assim por diante..., logo podemos usar pot *= num ou pot = pot * num
			printf("3 ^ %d = %d\n", i, pot *= num);
		}
	}
	return 0;
}