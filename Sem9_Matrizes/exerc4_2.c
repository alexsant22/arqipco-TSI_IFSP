/*
4.2. Escreva um programa que leia uma matriz de inteiros e determine a quantidade total de
elementos existentes.
Observação: Utilize função.
*/

#include <stdio.h>

// Protótipos das funções
void lerMatriz(int linha, int coluna, int matriz[linha][coluna]);
int contarElementos(int linha, int coluna);
void exibirResultado(int quantidade);

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

    // Salvando a quantidade de elementos
    int quantidade = contarElementos(linha, coluna);

    // Exibindo resultado
    exibirResultado(quantidade);

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

// Função para contar elementos
int contarElementos(int linha, int coluna)
{
    return linha * coluna; // Só co calculo de linha por coluna para saber quantos elementos tem a matriz
}

// Função para exibir mensagem de resultado de acordo com a soma
void exibirResultado(int quantidade)
{
    printf("\nA quantidade de valores da matriz foi: %d.", quantidade);
}