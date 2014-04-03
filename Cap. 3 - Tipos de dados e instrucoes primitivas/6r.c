#include <stdio.h>

/*
Em uma eleição sindical concorreram ao cargo de presidente três
candidatos (A, B e C). Durante a apuração dos votos foram computados
votos nulos e votos em branco, além dos votos válidos para cada
candidato. Deve ser criado um programa de computador que efetue a
leitura da quantidade de votos válidos para cada candidato, além de
efetuar também a leitura da quantidade de votos nulos e votos em
branco. Ao final o programa deve apresentar o número total de
eleitores, considerando votos válidos, nulos e em branco; O percentual
correspondente de votos válidos em relação à quantidade de eleitores;
o percentual correspondente de votos válidos do candidato A em
relação à quantidade de eleitores; o percentual correspondente de
votos válidos do candidato B em relação à quantidade de eleitores; o
percentual correspondente de votos válidos do candidato C em relação
à quantidade de eleitores; o percentual correspondente de votos nulos
em relação à quantidade de eleitores; e por último o percentual
correspondente de votos em branco em relação à quantidade de eleitores.
*/

int main()
{
	// Declaração e atribuição de tipos às variáveis
	int votos_A, votos_B, votos_C, votos_brancos, votos_nulos, total_de_votos, total_de_votos_validos;
    float pct_votos_A, pct_votos_B, pct_votos_C, pct_votos_brancos, pct_votos_nulos;
    
    // Interação com o usuário: Obter os votos do candidato A
    printf("Digite o número de votos do candidato A: ");
    
    // Leitura e atribuição do valor digitado à variável
    scanf("%d", &votos_A);
	
    // Interação com o usuário: Obter os votos do candidato B
    printf("Digite o número de votos do candidato B: ");

    // Leitura e atribuição do valor digitado à variável
	scanf("%d", &votos_B);
	
    // Interação com o usuário: Obter os votos do candidato C
    printf("Digite o número de votos do candidato C: ");
	
    // Leitura e atribuição do valor digitado à variável
    scanf("%d", &votos_C);
	
    // Interação com o usuário: Obter os votos brancos
    printf("Digite o número de votos brancos: ");

    // Leitura e atribuição do valor digitado à variável
	scanf("%d", &votos_brancos);

    // Interação com o usuário: Obter os votos nulos
	printf("Digite o número de votos nulos: ");

    // Leitura e atribuição do valor digitado à variável
	scanf("%d", &votos_nulos);
	
    // Processamento de dados:
    // Computar o total de votos e votos válidos
    total_de_votos = votos_A + votos_B + votos_C + votos_brancos + votos_nulos;
    total_de_votos_validos = votos_A + votos_B + votos_C;
    
    // Calcular a porcentagem de votos válidos para cada candidato
    pct_votos_A = (votos_A*100)/total_de_votos_validos;
    pct_votos_B = (votos_B*100)/total_de_votos_validos;
    pct_votos_C = (votos_C*100)/total_de_votos_validos;
    
    // Calcular a porcentagem de votos brancos e nulos
    pct_votos_brancos = (votos_brancos*100)/total_de_votos;
    pct_votos_nulos = (votos_nulos*100)/total_de_votos;

    // Resposta ao usuário
    // Perceba o uso de porcentagem 2 vezes (%%) para escrever o símbolo % na tela
    printf("O candidato A obteve %.1f%% dos votos válidos\n", pct_votos_A);
    printf("O candidato B obteve %.1f%% dos votos válidos\n", pct_votos_B);
    printf("O candidato C obteve %.1f%% dos votos válidos\n", pct_votos_C);
    printf("Foram computados %.1f%% de votos brancos\n", pct_votos_brancos);
    printf("Foram computados %.1f%% de votos nulos\n", pct_votos_nulos);

    // Saída do programa
    //system("pause") <= Somente para Windows
    return 0;
}
