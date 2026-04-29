/*
7.6. Escreva um programa que registre o número de passos dados em 7 (sete) dias. Armazene esses
valores em um vetor, calcule e mostre:
- o dia com maior número de passos.
- o total de passos na semana.
- a média diária.
*/

#include <stdio.h>
int main()
{
    int passosPorDia[7]; // Array de 7 dias para os passos
    int totalPassosSemana = 0;
    int diaMaisPassos;
    int maiorPassos = 0;
    float mediaDiaria;

    printf("Digite o numero de passos dados durante 7 dias:\n");

    // Laço para pedir os passos
    for (int i = 0; i < 7; i++)
    {
        printf("\nDigite os passos dados no dia %d: ", i + 1);
        scanf("%d", &passosPorDia[i]);

        // Somando valor de passos
        totalPassosSemana += passosPorDia[i];

        // Verificação do dia com mais passos
        if (passosPorDia[i] > maiorPassos)
        {
            maiorPassos = passosPorDia[i];

            // Salvando dia que registrou maior número de passos
            diaMaisPassos = i + 1;
        }
    }

    // Calculando media diaria
    mediaDiaria = totalPassosSemana / 7.0; // Para a divisão ser feita por um número do tipo Real

    // Exibindo resultados
    printf("\nDia com maior numero de passos: Dia %d, %d Passos.", diaMaisPassos, maiorPassos);
    printf("\nTotal de passos na semana: %d passos.", totalPassosSemana);
    printf("\nMedia diaria: %.2f passos.", mediaDiaria);

    return 0;
}