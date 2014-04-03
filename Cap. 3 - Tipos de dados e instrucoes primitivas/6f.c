#include <stdio.h>

/*
Ler dois valores para as variáveis A e B, e efetuar a troca dos valores
de forma que a variável A passe a possuir o valor da variável B e a
variável B passe a possuir o valor da variável A. Apresentar os valores
trocados.
*/

int main()
{
	// Precisaremos de uma variável de troca (C)
	// Declaração e atribuição de tipos às variáveis
	int a, b, c;
	
	// Interação com o usuário
	printf("Digite o valor para A: ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%d", &a);
	
	// Interação com o usuário
	printf("Digite o valor para B: ");
	
	// Leitura e atribuição do valor digitado à variável
	scanf("%d", &b);
	
	// Informação sobre o estado original das variáveis A e B
	printf("Os valores de A e B eram respectivamente: [ %d e %d ].\n", a, b);
	
	/* Processamento dos dados:
	Utilizaremos a variável C para conter o valor de A e sobrescrever o valor de A com B.
	Em seguida, usaremos C (que continha o valor de A) para sobrescrever B. Vamos assumir que o usuário
	digitou, por exemplo, o valor de 5 pra A e 8 pra B. Teremos o seguinte diagrama:
	___________________
	|  A  |  B  |  C  |
	-------------------
	|  5  |  8  |  0  |
	-------------------
	*/
	c = a; /*
	___________________
	|  A  |  B  |  C  |
	-------------------
	|  5  |  8  |  5  |
	-------------------
	*/
	a = b; /*
	___________________
	|  A  |  B  |  C  |
	-------------------
	|  8  |  8  |  5  |
	-------------------
	*/
	b = c; /*
	___________________
	|  A  |  B  |  C  |
	-------------------
	|  8  |  5  |  5  |
	-------------------
	*/
	
	// Resposta final ao usuário
	printf("Agora, os valores de A e B são respectivamente: [ %d e %d ].\n", a, b);
	
	// Saída do programa
	//system("pause"); <= Somente para Windows
	return 0;
}
