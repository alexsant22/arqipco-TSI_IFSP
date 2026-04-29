/*
2.5. Escreva um programa que implemente uma função float calcularUsoDados(float horasDeUso, float consumoPorHora)
para calcular o consumo de internet (em MB).
*/

#include <stdio.h>

float calcularUsoDados(float horasDeUso, float consumoPorHora)
{
    float total = horasDeUso * consumoPorHora;

    return total;
}

int main()
{
    float horasUso, consumoHora;

    printf("Quantas horas vc utilizou: ");
    scanf("%f", &horasUso);

    printf("\nQual foi seu consumo(Mb/h): ");
    scanf("%f", &consumoHora);

    float resultado = calcularUsoDados(horasUso, consumoHora);

    printf("\nO seu consumo total foi: %.2f", resultado);

    return 0;
}