/*
2.12. Em uma eleição com três candidatos, os votos são informados por meio de códigos:
- 1, 2 ou 3: voto para os respectivos candidatos
- 4: voto nulo
- 5: voto em branco
Crie um programa que leia o voto de 10 eleitores e informe:
- total de votos para cada candidato
- total de votos nulos
- total de votos em branco
*/

#include <stdio.h>
int main()
{
    int opcao; // Opção que o usuário escolher

    // As variaveis de contador para as opções que o usuário escolher
    int candidato1 = 0;
    int candidato2 = 0;
    int candidato3 = 0;
    int nulo = 0;
    int branco = 0;

    // Menu para Switch
    printf("=== Banca de Votação ====\n");
    printf("===> Menu <===\n");
    printf("1, 2 ou 3: Voto para respectivos Candidatos\n");
    printf("4 - Voto NULO\n");
    printf("5 - Voto em Branco\n");

    // Laço para 10x (10 votos)
    for (int contador = 1; contador <= 10; contador++)
    {
        printf("Digite qual opcao de voto Usuario %d: ", contador);
        scanf("%d", &opcao);

        // Lógica do switch case
        switch (opcao)
        {
        case 1:
            candidato1++;
            break;

        case 2:
            candidato2++;
            break;

        case 3:
            candidato3++;
            break;

        case 4:
            nulo++;
            break;

        case 5:
            branco++;
            break;

        default:
            printf("\nErro: Opcao invalida!");
            contador--; // Anula a rodada atual para o eleitor votar de novo, garantindo os 10 votos válidos
            break;
        }
    }

    // Exibindo resultados
    printf("\n=== Resultados dos Votos ===");
    printf("\nCandidato 1: %d votos.\nCandidato 2: %d votos.\nCandidato 3: %d votos.", candidato1, candidato2, candidato3);
    printf("\nVotos Nulos: %d", nulo);
    printf("\nVotos em Branco: %d", branco);

    return 0;
}