/*
4.2. Escreva um programa que leia o tempo de permanência (em horas) em um estacionamento e
calcule o valor a pagar:
• Até 2 horas: R$10
• Mais de 2 até 5 horas: R$20
• Mais de 5 horas: R$35
Exiba o valor total a ser pago.
*/

#include <stdio.h>
int main()
{
    float tempo, valorEstacionamento;

    printf("Digite o tempo de permanencia (em horas):\n");
    scanf("%f", &tempo);

    if (tempo <= 2)
    {
        valorEstacionamento = 10;

        printf("\nVc deve pagar R$%.2f de estacionamento.", valorEstacionamento);
    }
    else if (tempo > 5)
    {
        valorEstacionamento = 35;

        printf("\nVc deve pagar R$%.2f de estacionamento.", valorEstacionamento);
    }
    else
    {
        valorEstacionamento = 20;

        printf("\nVc deve pagar R$%.2f de estacionamento.", valorEstacionamento);
    }

    return 0;
}