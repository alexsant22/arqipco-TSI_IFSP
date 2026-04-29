/*
7.4. Elabore um programa (ou pseudocódigo) que leia um valor correspondente a um intervalo de
tempo em horas e calcule o valor equivalente em minutos, apresentando o resultado ao usuário.
Observação: 1 hora corresponde a 60 minutos
*/

#include <stdio.h>

int main()
{
    int tempoHoras;
    int tempoMinutos;

    printf("Digite o tempo em horas:\n");
    scanf("%i", &tempoHoras);

    tempoMinutos = tempoHoras * 60;

    printf("O tempo em horas: %i, em minutos eh %i", tempoHoras, tempoMinutos);

    return 0;
}