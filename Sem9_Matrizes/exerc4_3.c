/*
4.3. Escreva um programa que leia uma matriz de inteiros e exiba apenas os valores maiores que 10.
Observação: Utilize função.
*/

#include <stdio.h>

// Protótipos das funções
void lerMatriz(int linha, int coluna, int matriz[linha][coluna]);
void exibirNmrMatriz(int linha, int coluna, int matriz[linha][coluna]);

int main()
{
    int linha, coluna;

    // Pedindo quantas linhas e colulas irá ter a matriz
    printf("Quantas linhas sua matriz vai ter: ");
    scanf("%d", &linha);

    printf("\nQuantas colunas sua matriz vai ter: ");
    scanf("%d", &coluna);

    // Definindo matriz de acordo com os valores informados
    int matriz[linha][coluna];

    // Agora função de ler a matriz (armazenar os dados da matriz)
    lerMatriz(linha, coluna, matriz);

    // Exibindo valores maiores que 10
    exibirNmrMatriz(linha, coluna, matriz);

    return 0;
}

// Leitura dos números informados para a matriz
void lerMatriz(int linha, int coluna, int matriz[linha][coluna])
{
    printf("\nInforme os elementos da matriz %dx%d:\n", linha, coluna);
    for (int i = 0; i < linha; i++) // Percorre primeiro a linha
    {
        for (int j = 0; j < coluna; j++) // Depois os valores de cada coluna da linha percorrida
        {
            printf("\nElemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]); // Salvando os elementos de linha e coluna
        }
    }
}

// Exibindo números maiores que 10 da matriz
void exibirNmrMatriz(int linha, int coluna, int matriz[linha][coluna])
{
    printf("\nMatriz informada:\n");
    for (int i = 0; i < linha; i++) // Percorre primeiro a linha
    {
        for (int j = 0; j < coluna; j++) // Depois os valores de cada coluna da linha percorrida
        {
            if (matriz[i][j] > 10) // Verifica se os valores são maior que 10 e exibe eles
            {
                printf("%d ", matriz[i][j]);
            }
        }

        printf("\n");
    }
}