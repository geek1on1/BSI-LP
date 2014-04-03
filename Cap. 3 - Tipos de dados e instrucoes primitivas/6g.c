#include <stdio.h>

/*
Ler quatro valores numéricos inteiros e apresentar o resultado das
adições e das multiplicações utilizando-se o conceito de propriedade
distributiva para a máxima-combinação possível entre as quatro
variáveis. Considerando-se o uso das variáveis A, B, C e D, deverá ser
efetuada seis adições e seis multiplicações, ou seja, de forma geral
deverá ser combinada a variável A com a variável B, a variável A com
a variável C, a variável A com a variável D. Depois será necessário
combinar a variável B com a variável C e a variável B com a variável
D e por fim a variável C será combinada com a variável D
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	int a, b, c, d;
	
	// Interação com o usuário: Obter os respectivos valores de a, b, c e d
	printf("Digite um valor inteiro para A:");
	scanf("%d", &a);
	printf("Digite um valor inteiro para B:");
	scanf("%d", &b);
	printf("Digite um valor inteiro para C:");
	scanf("%d", &c);
	printf("Digite um valor inteiro para D:");
	scanf("%d", &d);
	
	/* Processamento dos dados:
	Nesse caso, vamos apresentar a soma e multiplicação direto pro usuário
	*/
	// Resposta ao usuário
	printf("A + B => %d + %d = %d\n", a, b, a + b);
	printf("A + C => %d + %d = %d\n", a, c, a + c);
	printf("A + D => %d + %d = %d\n", a, d, a + d);
	printf("B + C => %d + %d = %d\n", b, c, b + c);
	printf("B + D => %d + %d = %d\n", b, d, b + d);
	printf("C + D => %d + %d = %d\n", c, d, c + d);
	printf("A x B => %d x %d = %d\n", a, b, a * b);
	printf("A x C => %d x %d = %d\n", a, c, a * c);
	printf("A x D => %d x %d = %d\n", a, d, a * d);
	printf("B x C => %d x %d = %d\n", b, c, b * c);
	printf("B x D => %d x %d = %d\n", b, d, b * d);
	printf("C x D => %d x %d = %d\n", c, d, c * d);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
