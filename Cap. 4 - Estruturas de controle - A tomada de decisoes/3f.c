#include <stdio.h>

/*
Ler três valores e apresentá-los dispostos em ordem crescente. Utilizar os
conceitos de propriedade distributiva (exercício "g" do capítulo 3) e troca
de valores entre variáveis (exercício "f" do capítulo 3).
*/

int main()
{
	int a, b, c, max, med, min;
	
	printf("Digite o valor de A: \n");
	scanf("%d", &a);
	printf("Digite o valor de B: \n");
	scanf("%d", &b);
	printf("Digite o valor de C: \n");
	scanf("%d", &c);
	
	if( a == b || a == c || b == c ) {
		printf("Não é possível trabalhar com dois ou mais números iguais...\n");
		return 0;
	}

	if ( a > b && b > c ) {
		max = a;
		med = b;
		min = c;
	} else if(a > b && b < c && c < a) {
		max = a;
		med = c;
		min = b;
	} else if ( a < b && b < c ) {
		max = c;
		med = b;
		min = a;
	} else if ( a < b && b > c && c < a) {
		max = b;
		med = a;
		min = c;
	} else if ( c > b && c > a && a < c ) {
		max = c;
		med = a;
		min = b;
	} else {
		max = b;
		med = c;
		min = a;
	}
	printf("---------------------------\n");
	printf("A ordem decrescente dos números é %d > %d > %d\n", max, med, min);
	printf("---------------------------\n");
	return 0;
}