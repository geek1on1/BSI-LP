#include <stdio.h>

/*
Ler um valor numérico inteiro que esteja na faixa de valores de 1 até 9. O
programa deve apresentar a mensagem "O valor está na faixa permitida",
caso o valor informado esteja entre 1 e 9. Se o valor estiver fora da faixa,
o programa deve apresentar a mensagem "O valor está fora da faixa permitida".
*/

int main()
{
	int num;
	
	printf("Digite um valor inteiro para um número: \n");
	scanf("%d", &num);
	
	printf("--------------------------------------\n");
	if( num >= 1 && num <= 9 ) {
		printf("O valor está na faixa permitida.\n");
	} else {
		printf("O valor está fora da faixa permitida.\n");
	}
	printf("--------------------------------------\n");
	return 0;
}