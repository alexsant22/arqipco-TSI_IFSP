/*
4.5.Escreva um programa que leia uma matriz de inteiros, determine e exiba o maior e o menor elemento.
Observação: Utilize função.
*/

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

// Função para ler a matriz
void lerMatriz(int matriz[LINHAS][COLUNAS])
{
    int i, j;

    printf("Digite os valores da matriz:\n");

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para encontrar maior e menor elemento
void maiorMenor(int matriz[LINHAS][COLUNAS], int *maior, int *menor)
{
    int i, j;

    *maior = matriz[0][0];
    *menor = matriz[0][0];

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] > *maior)
            {
                *maior = matriz[i][j];
            }

            if (matriz[i][j] < *menor)
            {
                *menor = matriz[i][j];
            }
        }
    }
}

int main()
{
    int matriz[LINHAS][COLUNAS];
    int maior, menor;

    lerMatriz(matriz);

    maiorMenor(matriz, &maior, &menor);

    printf("\nMaior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}