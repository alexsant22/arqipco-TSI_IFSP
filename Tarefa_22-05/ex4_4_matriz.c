/*
4.4.Escreva um programa que leia uma matriz de inteiros e um valor informado pelo usuário. O programa deve verificar se esse valor está presente na matriz. Se estiver, exiba a posição.
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

// Função para buscar o valor na matriz
void buscarValor(int matriz[LINHAS][COLUNAS], int valor)
{
    int i, j;
    int encontrado = 0;

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] == valor)
            {
                printf("\nValor encontrado na posicao [%d][%d]\n", i, j);
                encontrado = 1;
            }
        }
    }

    if (!encontrado)
    {
        printf("\nValor nao encontrado na matriz.\n");
    }
}

int main()
{
    int matriz[LINHAS][COLUNAS];
    int valor;

    lerMatriz(matriz);

    printf("\nDigite o valor que deseja buscar: ");
    scanf("%d", &valor);

    buscarValor(matriz, valor);

    return 0;
}