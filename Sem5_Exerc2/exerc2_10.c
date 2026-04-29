/*
2.10. Elabore um programa que leia a quantidade de passos registrados pelo celular em 7 dias e
informe:
- o total de passos na semana
- quantos dias o usuário atingiu pelo menos 3.000 passos
*/

#include <stdio.h>
int main()
{
    int passos;
    int qtdDiasMeta = 0; // Contador de dias em q compriu a meta de 3.000 passos
    int totalPassos = 0; // Soma do total de passos na semana (7 dias)

    printf("Digite a quantidade de passos durante 7 dias:\n");

    // Laço de 7x (7 dias)
    for (int contador = 1; contador <= 7; contador++)
    {
        printf("\nDigite a quantidade de passos no dia %d: ", contador); // Pedindo a qtd de passos de acordo com o contador de dias
        scanf("%d", &passos);

        if (passos >= 3000)
        {
            qtdDiasMeta++;
        }

        totalPassos = totalPassos + passos;
    }

    // Exibindo resultados
    printf("\n--- Exibindo Resultados ---\n");
    printf("\nTotal de passos na semana (7 Dias): %d passos.", totalPassos);
    printf("\nQuantidade de dias em que bateu a meta (>= 3.000 passos): %d dias.", qtdDiasMeta);

    return 0;
}