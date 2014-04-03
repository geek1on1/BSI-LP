#include <stdio.h>

/*
Ler os valores de quatro notas escolares de um aluno. Calcular a média
aritmética e apresentar a mensagem "Aprovado" se a média obtida for
maior ou igual a 7; caso contrário, o programa deve solicitar a nota de
exame do aluno e calcular uma nova média aritmética entre a nota de
exame e a primeira média aritmética. Se o valor da nova média for maior
ou igual a cinco, apresentar a mensagem "Aprovado em exame"; caso
contrário, apresentar a mensagem "Reprovado". Informar junto de cada
mensagem o valor da média obtida.
*/

int main()
{
	float n1, n2, n3, n4, exame, media;

	printf("Digite a nota do primeiro bimestre: \n");
	scanf("%f", &n1);
	printf("Digite a nota do segundo bimestre: \n");
	scanf("%f", &n2);
	printf("Digite a nota do terceiro bimestre: \n");
	scanf("%f", &n3);
	printf("Digite a nota do quarto bimestre: \n");
	scanf("%f", &n4);

	media = (n1 + n2 + n3 + n4) / 4;
	
	if(media >= 7) {
	
		printf("Aprovado!\n");
		return 0;
	
	} else {
	
		printf("Média: %.1f.\nDigite a nota do exame final: \n", media);
		scanf("%f", &exame);
		media = (media + exame) / 2;
	
		if (media >= 5)	{
			printf("Aprovado em exame!\n");
			return 0;
		} else {
			printf("Reprovado!\n");
			return 0;
		}
	}
}