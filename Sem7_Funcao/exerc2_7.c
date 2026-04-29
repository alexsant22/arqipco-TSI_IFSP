/*
2.7. Escreva um programa que implemente uma função float calcularEngajamento(float
numeroCurtidas, float numeroComentarios, float numeroCompartilhamentos) com base
na fórmula:
engajamento = numeroCurtidas + 2 * numeroComentarios + 3 * numeroCompartilhamentos;
*/

#include <stdio.h>

float calcularEngajamento(float numeroCurtidas, float numeroComentarios, float numeroCompartilhamentos)
{
    float engajamento = numeroCurtidas + (2 * numeroComentarios) + (3 * numeroCompartilhamentos);

    return engajamento;
}

int main()
{
    float numeroCurtidas, numeroComentarios, numeroCompartilhamentos;

    printf("Digite a quantidade de Curtidas: ");
    scanf("%f", &numeroCurtidas);

    printf("\nDigite a quantidade de Comentarios: ");
    scanf("%f", &numeroComentarios);

    printf("\nDigite a quantidade de Compartilhamento: ");
    scanf("%f", &numeroCompartilhamentos);

    float resultado = calcularEngajamento(numeroCurtidas, numeroComentarios, numeroCompartilhamentos);

    printf("\nO total de engajamento foi: %.2f", resultado);

    return 0;
}