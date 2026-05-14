/*
6.4. Escreva um programa que armazene 5 nomes em um array de strings e solicite outro nome para
busca. O programa deve informar se o nome foi encontrado e em qual posição ele está
armazenado.
Observação: Utilize funções.
*/

#include <stdio.h>  // Biblioteca padrão de entrada e saída.
#include <ctype.h>  // Biblioteca para classificar caracteres.
#include <string.h> // Biblioteca para manipulação de strings.

// Protótipos de funções
void salvarNomes(char nomes[5][100]);
int buscarNome(char nomes[5][100], char busca[100]);

int main()
{
    char nomes[5][100];
    char busca[100];
    int posicao;

    // Salvando nomes
    salvarNomes(nomes);

    // Buscando nome
    posicao = buscarNome(nomes, busca);

    if (posicao != -1)
    {
        // Soma +1 apenas para ficar mais natural para o usuário (posição 1 a 5)
        printf("\nO nome: \"%s\" foi encontrado na posicao: %d\n", busca, posicao + 1);
    }
    else
    {
        printf("\nO nome nao foi encontrado na lista.\n");
    }

    return 0;
}

// Função para salvar os nomes
void salvarNomes(char nomes[5][100])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin); // Lê a entrada de forma segura, guardando também os espaços digitados.
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; // Procura o 'Enter' (\n) capturado pelo fgets e o substitui pelo caractere nulo (\0).
    }
}

// Função para buscar nome
int buscarNome(char nomes[5][100], char busca[100])
{
    printf("Digite o nome que deseja buscar: ");
    fgets(busca, 100, stdin);           // Lê a entrada de forma segura, guardando também os espaços digitados.
    busca[strcspn(busca, "\n")] = '\0'; // Procura o 'Enter' (\n) capturado pelo fgets e o substitui pelo caractere nulo (\0).

    for (int i = 0; i < 5; i++)
    {
        // Se a comparação (strcmp() -> compara uma string com a outra) retornar 0, as strings são exatamente iguais
        if (strcmp(nomes[i], busca) == 0)
        {
            return i; // Retorna o índice onde achou e sai da função
        }
    }

    return -1; // Se o laço terminar e não achar nada, retorna -1
}