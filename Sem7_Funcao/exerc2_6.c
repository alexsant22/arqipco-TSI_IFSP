/*
2.6. Escreva um programa que implemente uma função float calcularEmissaoCO2(float quilometrosRodados)
considerando que cada quilômetro gera 0,12 kg de CO2.
*/

#include <stdio.h>

float calcularEmissaoCO2(float quilometrosRodados)
{
    const float CO2 = 0.12;

    float emissaoTotal = quilometrosRodados * CO2;

    return emissaoTotal;
}

int main()
{
    float kmRodados;

    printf("Digite a quantidade de KM rodado: ");
    scanf("%f", &kmRodados);

    float resultado = calcularEmissaoCO2(kmRodados);

    printf("\nA emissao total de CO2 foi: %.2f", resultado);

    return 0;
}