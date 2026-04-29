/*
6.5. Crie um programa que leia a porcentagem de bateria consumida por hora e calcule quanto será
consumido em um período informado pelo usuário.
*/

#include <stdio.h>
int main()
{
    float bateriaConsumidaHora;
    float periodoInformado;
    float consumoTotal;

    printf("Digite a porcentagem de bateria consumida por hora: ");
    scanf("%f", &bateriaConsumidaHora);

    printf("Informe um periodo de tempo (em Hora) para ser calculado o consumo de bateria: ");
    scanf("%f", &periodoInformado);

    consumoTotal = bateriaConsumidaHora * periodoInformado;

    printf("A quantidade aproximada de bateria consumida durante o periodo de %.2f horas eh: %.2f%% de bateria", periodoInformado, consumoTotal);

    return 0;
}
