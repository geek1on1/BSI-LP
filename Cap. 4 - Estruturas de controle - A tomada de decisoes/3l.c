#include <stdio.h>

/*
Ler um valor numérico inteiro qualquer e fazer a sua apresentação caso o
valor não seja maior que três. Utilize apenas o operador lógico não para
a solução deste problema.
*/

int main()
{
	int num;
	
	printf("Digite um valor inteiro para um número: \n");
	scanf("%d", &num);
	
	printf("--------------------------------------\n");
	if( !(num > 3) ) {
		printf("O número %d é permitido.\n", num);
	}
	printf("--------------------------------------\n");
	return 0;
}