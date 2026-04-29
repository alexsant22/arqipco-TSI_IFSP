/*
2.6. Elabore um programa que leia a temperatura média de 12 meses e informe a maior temperatura
registrada. Desconsidere empates
*/

#include <stdio.h>
int main()
{
    float temperatura;

    // Inicializamos com uma temperatura impossível na Terra para garantir que a primeira temperatura digitada será maior que ela.
    float maiorTemperatura = -999.0;

    printf("Digite a temperatura media durante 12 meses:\n");

    // Laço para repitir 12x (12 meses)
    for (int contador = 1; contador <= 12; contador++)
    {
        printf("Digite a temperatura media do mes %d: ", contador); // Pede a temperatura de acordo com a contagem de meses
        scanf("%f", &temperatura);

        // Verificação de maior temperatura
        if (temperatura > maiorTemperatura)
        {
            maiorTemperatura = temperatura;
        }
    }

    // Exibindo a maior temperatura após completar o laço
    printf("\nA maior temperatura media registrada durante os 12 meses foi: %.2f°C", maiorTemperatura);

    return 0;
}