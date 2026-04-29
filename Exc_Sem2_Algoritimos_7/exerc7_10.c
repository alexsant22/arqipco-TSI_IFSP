/*
7.10. Elabore um programa (ou pseudocódigo) que leia:
− a distância percorrida em uma viagem (em quilômetros);
− o tempo gasto para realizar o percurso (em horas).
Calcule e mostre a velocidade média da viagem.
Observação: velocidade média = distância / tempo.
*/

#include <stdio.h>
int main()
{
    float distanciaKM, tempoHoras, velocidadeMedia;

    printf("Digite a distancia percorrida em uma viagem (em quilometros):\n");
    scanf("%f", &distanciaKM);

    printf("Digite o tempo gasto para realizar o percurso (em horas):\n");
    scanf("%f", &tempoHoras);

    velocidadeMedia = distanciaKM / tempoHoras;

    printf("A velocidade media da viagem foi: %.2f Km/H.", velocidadeMedia);

    return 0;
}