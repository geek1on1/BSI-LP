#include <stdio.h>

// Para compilar esse programa (no LINUX) use o comando:
// gcc -o quadrado 1a.c -Wall -std=c99

/*
Escreva um programa que apresente a série de Fibonacci até o décimo
quinto termo. A série de Fibonacci é formada pela seqüência: 1, 1, 2,
3, 5, 8, 13, 21 , 34, ... etc. Esta série se caracteriza pela soma de um
termo posterior com o seu anterior subseqüente.
*/

int main()
{
	int proximo = 1,
		fibonacci_1 = 0,
		fibonacci_2 = 1,
		i = 1; // Contador

    printf("%d ", proximo);
    
    // Enquanto i (1) < 15, executaremos o loop 15 vezes
    while(i < 15)
    {
    	// Próximo número fibonacci é a soma dos dois anteriores
        proximo = fibonacci_1 + fibonacci_2;
        printf("%d ",proximo);

        // Abaixo, executamos uma troca:
        // O primeiro termo passa a receber o segundo
        fibonacci_1 = fibonacci_2;

        // E o segundo passa a ser o próximo
        fibonacci_2 = proximo;

        // Incrementamos +1 ao contadore reiniciamos o loop
        i++;
    }
    printf("\n");
	return 0;
}