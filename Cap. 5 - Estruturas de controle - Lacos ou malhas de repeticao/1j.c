#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Elaborar um programa que apresente os valores de conversão de graus
Celsius em Fahrenheit, de 1O em 1O graus, iniciando a contagem em
1O graus Celsius e finalizando em 100 graus Celsius. O programa
deverá apresentar os valores das duas temperaturas.
*/

int main()
{
	int celsius = 10; // Contador
    float fahrenheit;

    printf("Tabela de conversão de Celsius para Fahrenheits\n");
    printf("-----------------------------------------------\n");
    printf("Celsius\t\t|\tFahrenheits\n");
    printf("-----------------------------------------------\n");

    while(celsius <= 100)
    {
        printf("%.1d\t\t|\t", celsius);
        fahrenheit = celsius * 1.8 + 32;
        printf("%.1f\n", fahrenheit);
    	celsius++;
    }
    printf("-----------------------------------------------\n");
	return 0;
}