// operacoes.c

#include "operacoes.h"

// Função 1: Somar
int somar(int arr[], int tamanho)
{
    int soma = 0; // Acumulador começa zerado

    // Laço para ir somando os valores
    for (int i = 0; i < tamanho; i++)
    {
        soma = soma + arr[i];
    }

    return soma;
}

// Função 2: Maior
int acharMaior(int arr[], int tamanho)
{
    int maior = arr[0]; // Assumindo que o primeiro valor do array é o maior para a comparação

    // Laço para percorrer o array e fazer comparação dos valores
    for (int i = 1; i < tamanho; i++) // Começa pela posição 1, por conta de ja ter armazenado o da posição 0
    {
        if (arr[i] > maior)
        {
            maior = arr[i];
        }
    }

    return maior;
}

// Função 3: Menor
int acharMenor(int arr[], int tamanho)
{
    int menor = arr[0]; // Assumindo que o primeiro valor do array é o menor para a comparação

    // Laço para percorrer o array e fazer comparação dos valores
    for (int i = 1; i < tamanho; i++) // Começa pela posição 1, por conta de ja ter armazenado o da posição 0
    {
        if (arr[i] < menor)
        {
            menor = arr[i];
        }
    }

    return menor;
}