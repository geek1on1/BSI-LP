#include <stdio.h>

/*
Ler o nome e o sexo de uma pessoa e apresentar como saída uma das
seguintes mensagens: "Ilmo. Sr.", caso seja informado o sexo como
masculino, ou "Ilma. Sra.", caso seja informado o sexo como feminino.
Apresentar também junto de cada mensagem de saudação o nome
previamente informado.
*/

int main()
{
	// char nome[100] é uma string (conjunto de caracteres) que suporta até
	// 100 caracteres...
	char nome[100] = "Paulo", sexo;
	
	printf("Digite 'M' para sexo masculino ou 'F' para feminino: \n");
	scanf("%c", sexo);
	// printf("Digite o nome da pessoa: \n");
	// scanf("%s", nome);
	
	printf("--------------------------------------\n");
	
	if( sexo != 'M' || sexo != 'F' ) {
		printf("O sexo digitado não é permitido.\n");
		return 0;
	} else if( sexo == 'M' ) {
		printf("Ilmo. Sr. %s,\n ", nome);
	} else {
		printf("Ilma. Sra. %s,\n ", nome);
	}
	
	printf("--------------------------------------\n");
	return 0;
}
