/*
3.6. Escreva um programa que simule o lançamento de um dado e verifique quantas tentativas foram
necessárias para acertar o número sorteado.
Observação: É preciso utilizar a função rand(). Realize uma pesquisa sobre sua utilização e como
simular o lançamento de um dado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // Define a semente baseada no tempo atual
    srand(time(NULL));

    // Definindo que o rand() vai gerar um número entre 6 e 1.
    int numeroSorteado = rand() % 6 + 1;
    int palpite;
    int contador = 0;

    // do - while
    do
    {
        // Pedindo palpite
        printf("Digite um numero de 1 a 6: ");
        scanf("%d", &palpite);

        // Aumentando contador
        contador++;

        // Validando palpite
        if (palpite != numeroSorteado)
        {
            printf("\nErrou, tente novamente!");
        }

    } while (palpite != numeroSorteado);

    // Parabenizando caso acerte o numero
    printf("\nParabens! Vc acertou o numero.\nQuantidade de tentativas: %d", contador);

    return 0;
}