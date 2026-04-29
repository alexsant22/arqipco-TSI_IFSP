/*
7.1. Escreva um programa que leia 5 números inteiros, armazene-os num vetor e exiba os valores na
ordem informada.
*/

#include <stdio.h>
int main()
{
    int numeros[5]; // Criando um Array de 5 posições (0 à 4)

    printf("Digite 5 valores interios:\n");

    // Laço para pedir os 5 valores
    for (int i = 0; i < 5; i++)
    {
        // Pedindo valores
        printf("\nDigite o valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Laço para ler os valores armazenados no Array
    printf("\nExibindo Valores:");
    for (int i = 0; i < 5; i++)
    {
        printf("\nValor na posição %d: %d.", i, numeros[i]);
    }

    return 0;
}