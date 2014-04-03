#include <stdio.h>

/*
Ler os valores de quatro notas escolares de um aluno. Calcular a média
aritmética e apresentar a mensagem "Aprovado" se a média obtida for
maior ou igual a 5; caso contrário, apresentar a mensagem " Reprovado".
Informar junto de cada mensagem o valor da média obtida.
*/

int main()
{
	float n1, n2, n3, n4, media;

	printf("Digite a nota do primeiro bimestre: \n");
	scanf("%f", &n1);
	printf("Digite a nota do segundo bimestre: \n");
	scanf("%f", &n2);
	printf("Digite a nota do terceiro bimestre: \n");
	scanf("%f", &n3);
	printf("Digite a nota do quarto bimestre: \n");
	scanf("%f", &n4);
	media = (n1 + n2 + n3 + n4) / 4;
	if(media >= 5) {
		printf("Aprovado - Média Final: %.1f\n", media);
		return 0;
	} else {
		printf("Reprovado - Média Final: %.1f\n", media);
		return 0;
	}
}
