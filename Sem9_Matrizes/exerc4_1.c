/*
4.1. Escreva um programa que leia os elementos de uma matriz de inteiros e calcule a soma de todos
eles. Ao final, exiba o valor obtido.
Observação: Utilize função.
*/

#include <stdio.h>

// Protótipos das funções
void lerMatriz(int linha, int coluna, int matriz[linha][coluna]);
int somarMatriz(int linha, int coluna, int matriz[linha][coluna]);
void exibirResultado(int resultado);

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

    // Chamndo a função de soma dos valores e salvando o resultado
    int resultado = somarMatriz(linha, coluna, matriz);

    // Exibindo o resultado
    exibirResultado(resultado);

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

// Função para somar os valores da matriz
int somarMatriz(int linha, int coluna, int matriz[linha][coluna])
{
    int soma = 0;

    for (int i = 0; i < linha; i++) // Percorre primeiro a linha
    {
        for (int j = 0; j < coluna; j++) // Depois os valores de cada coluna da linha percorrida
        {
            soma = soma + matriz[i][j]; // Somando os valores da matriz percorridos pelo For
        }
    }

    return soma;
}

// Função para exibir mensagem de resultado de acordo com a soma
void exibirResultado(int resultado)
{
    printf("\nO resultado da soma dos valores da matriz foi: %d.", resultado);
}