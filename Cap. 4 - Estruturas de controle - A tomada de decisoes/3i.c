#include <stdio.h>

/*
Ler cinco valores numéricos inteiros, identificar e apresentar o maior e o
menor valores informados. Não execute a ordenação dos valores.
*/

int main()
{
	int a, b, c, d, e, max, min;
	
	printf("Digite o valor de A: \n");
	scanf("%d", &a);
	max = a; min = a;

	printf("Digite o valor de B: \n");
	scanf("%d", &b);
	if( b >= max ) { max = b; } else { min = b; }

	printf("Digite o valor de C: \n");
	scanf("%d", &c);
	if( c >= max ) { max = c; } else if( c <= min ) { min = c; } 

	printf("Digite o valor de D: \n");
	scanf("%d", &d);
	if( d >= max ) { max = d; } else if( d <= min ) { min = d; }

	printf("Digite o valor de E: \n");
	scanf("%d", &e);
	if( e >= max ) { max = e; } else if( e <= min ) { min = e; }	
	
	printf("--------------------------------------\n");
	printf("O valor máximo é: %d e,\nO valor mínimo é: %d.\n", max, min);
	printf("--------------------------------------\n");
	return 0;
}