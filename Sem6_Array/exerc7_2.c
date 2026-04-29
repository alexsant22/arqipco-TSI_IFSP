/*
7.2. Escreva um programa que leia 6 (seis) números inteiros e exiba-os na ordem inversa
*/

#include <stdio.h>
int main()
{
    int numeros[6]; // Definindo array de 6 posições

    printf("Digite 6 valores inteiros:\n");

    // Laço para pedidr os números
    for (int i = 0; i < 6; i++)
    {
        printf("\nDigite o valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Laço para ler os valores armazenados
    printf("\nExibindo valores na ordem inversa:");

    for (int i = 5; i >= 0; i--) // i = 5 para iniciar a leitura pelo quinto indice do Array
    {
        printf("\nValor na posicao %d: %d.", i, numeros[i]);
    }

    return 0;
}