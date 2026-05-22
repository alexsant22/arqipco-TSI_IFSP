/*
2.1. Escreva um programa que armazene os dados de um streamer: nome do canal, plataforma,
quantidade de seguidores e número de lives realizadas no mês. Após o cadastro, o programa deve
exibir:
    - Os dados do streamer.
    - A média de lives por semana (considere 4 semanas no mês).
    - Uma mensagem indicando:
        o “Canal em crescimento” para streamers com mais de 10.000 seguidores.
        o “Canal iniciante” caso contrário.
*/

#include <stdio.h>
#include <string.h>

// Estrutura de Streamer
typedef struct
{
    char nomeCanal[50];
    char plataforma[50];
    int quantidadeSeguidores;
    int numeroLivesMes;
} Streamer;

int main()
{
    Streamer s;
    float mediaLives;

    printf("Digite o nome do canal: ");
    fgets(s.nomeCanal, sizeof(s.nomeCanal), stdin);
    s.nomeCanal[strcspn(s.nomeCanal, "\n")] = '\0'; // Remove o Enter

    printf("\nDigite o nome da plataforma: ");
    fgets(s.plataforma, sizeof(s.plataforma), stdin);
    s.plataforma[strcspn(s.plataforma, "\n")] = '\0'; // Remove o Enter

    printf("\nDigite a quantidade de seguidores: ");
    scanf("%d", &s.quantidadeSeguidores);

    printf("\nDigite o numero de lives no mes: ");
    scanf("%d", &s.numeroLivesMes);

    // Calculando a média de lives
    mediaLives = s.numeroLivesMes / 4.0;

    // Exibindo os resultados
    printf("\nExibindo dados do Streamer:");

    printf("\nNome do canal: %s", s.nomeCanal);
    printf("\nPlataforma: %s", s.plataforma);
    printf("\nQuantidade de Seguidores: %d", s.quantidadeSeguidores);
    printf("\nNumero de Lives no mes: %d", s.numeroLivesMes);
    printf("\nMedia de lives por semana: %.2f", mediaLives);

    if (s.quantidadeSeguidores > 10000)
    {
        printf("\nCanal em Crescimento!!");
    }
    else
    {
        printf("\nCanal Iniciante");
    }

    return 0;
}