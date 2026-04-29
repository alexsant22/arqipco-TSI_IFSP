/*
7.12. Escreva um programa que identifique uma falha no sistema de acordo com as seguintes regras:
• o sensor estiver ativo (1) E houver erro detectado (1) E
• o sistema não estiver em manutenção (0)
Exiba "Falha detectada" quando a condição for satisfeita
*/

#include <stdio.h>
int main()
{
    int sensor, erroDetectado, manutencao;

    printf("Digite se o sensor esta ativo (1 ou 0): ");
    scanf("%d", &sensor);

    printf("");
    printf("Erro detectado? Sim ou nao (1 ou 0): ");
    scanf("%d", &erroDetectado);

    printf("");
    printf("O sistema esta em manutencao? Sim ou nao (1 ou 0): ");
    scanf("%d", &manutencao);

    if ((sensor == 1 && erroDetectado == 1) && (manutencao == 0))
    {
        printf("Falha detectada");
    }
    else
    {
        printf("Falha nao detectada");
    }

    return 0;
}