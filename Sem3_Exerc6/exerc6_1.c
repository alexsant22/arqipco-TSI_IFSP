/*
6.1. Escreva um programa que leia a quantidade de dados consumidos (em GB) e mostre uma
mensagem informando o consumo total no mês.
*/

#include <stdio.h>
int main()
{
    float dadosConsumidos;

    printf("Digite a quantidade de dados consumidos (em GB) no mes: ");
    scanf("%f", &dadosConsumidos);

    printf("O consumo total no mes foi de %.2f GB.\n", dadosConsumidos);

    return 0;
}