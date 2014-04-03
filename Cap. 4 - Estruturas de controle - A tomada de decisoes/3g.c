#include <stdio.h>

/*
Ler quatro valores numéricos inteiros e apresentar os valores que são
divisíveis por 2 e 3.
*/

int main()
{
	int a, b, c, d;
	
	printf("Digite o valor de A: \n");
	scanf("%d", &a);
	printf("Digite o valor de B: \n");
	scanf("%d", &b);
	printf("Digite o valor de C: \n");
	scanf("%d", &c);
	printf("Digite o valor de D: \n");
	scanf("%d", &d);

	printf("--------------------------------------\n");
	if (a % 2 == 0 && a % 3 == 0) {
		printf("A ( %d ) é divisível por 2 e 3.\n", a);
	}
	if (b % 2 == 0 && b % 3 == 0) {
		printf("B ( %d ) é divisível por 2 e 3.\n", b);
	}
	if (c % 2 == 0 && c % 3 == 0) {
		printf("C ( %d ) é divisível por 2 e 3.\n", c);
	}
	if (d % 2 == 0 && d % 3 == 0) {
		printf("D ( %d ) é divisível por 2 e 3.\n", d);
	}
	printf("--------------------------------------\n");
	return 0;
}