/*
7.8. Escreva um programa que leia e armazene os pontos obtidos (0, 1 ou 3) de um time que jogou 10
(dez) partidas. Após, calcule e mostre:
- O total de pontos.
- Quantas vitórias ocorreram.
- A maior sequência de vitórias consecutivas.
*/

#include <stdio.h>
int main()
{
    int pontos[10];
    int totalPontos = 0;
    int vitorias = 0;
    int sequenciaAtual = 0;
    int maiorSequencia = 0;

    printf("Digite os pontos obtidos (0, 1 ou 3), durante 10 jogos:\n");

    // Laço para rodas as 10 partidas
    for (int i = 0; i < 10; i++)
    {
        // Pedindo pontuações
        printf("\nDigite a pontuacao do jogo %d: ", i + 1);
        scanf("%d", &pontos[i]);

        // Somando pontuações
        totalPontos += pontos[i];

        // Verificação de vitorias
        if (pontos[i] == 3)
        {
            vitorias++;

            // Contando sequencia de vitorias
            sequenciaAtual++;
        }
        else // Se eleperder zera a sequencia atual
        {
            sequenciaAtual = 0;
        }

        if (sequenciaAtual > maiorSequencia)
        {
            maiorSequencia = sequenciaAtual;
        }
    }

    // Exibindo resultados
    printf("\nTotal de pontos: %d", totalPontos);
    printf("\nQuantidade de vitorias: %d", vitorias);
    printf("\nMaior sequencia: %d", maiorSequencia);

    return 0;
}