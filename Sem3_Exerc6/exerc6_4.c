/*
6.4. Elabore um programa que leia a quantidade de passos dados em um dia e estime o total de passos
em um mês (30 dias).
*/

#include <stdio.h>
int main()
{
    float passosDia;
    float passosMensal;

    printf("Digite a quantidade de passos dados em um dia: ");
    scanf("%f", &passosDia);

    passosMensal = passosDia * 30;

    printf("A estimativa total de passos em um mes (30 dias),\nde acordo com os passos dados em um dia (%.2f passos), eh: %.2f passos mensais.", passosDia, passosMensal);

    return 0;
}