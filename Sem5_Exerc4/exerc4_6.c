/*
4.6. Escreva um programa que leia o tipo de sistema operacional (1 – Windows, 2 – Linux) e a Memória
RAM (em GB). Após isso, verifique se o sistema atende os requisitos de acordo com as seguintes
regras:
• Se for Windows: mínimo 8GB
• Se for Linux: mínimo 4GB
*/

#include <stdio.h>
int main()
{
    int sistemaOperacional, memoriaRAM;

    printf("Sistema Operacional:\n");
    printf("1 - Windows\n");
    printf("2 - Linux\n");
    printf("Digite o seu Sistema operacional: ");
    scanf("%d", &sistemaOperacional);

    switch (sistemaOperacional)
    {
    case 1:
        printf("\nDigite a quantidade de Memoria RAM que vc tem (em GB): ");
        scanf("%d", &memoriaRAM);

        if (memoriaRAM >= 8)
        {
            printf("\nSua quantidade de Memoria RAM atende aos requisitos do seu Sistema Operacional!");
        }
        else
        {
            printf("\nSua quantidade de Memoria RAM NAO atende aos requisitos do seu Sistema Operacional");
        }

        break;

    case 2:
        printf("\nDigite a quantidade de Memoria RAM que vc tem (em GB): ");
        scanf("%d", &memoriaRAM);

        if (memoriaRAM >= 4)
        {
            printf("\nSua quantidade de Memoria RAM atende aos requisitos do seu Sistema Operacional!");
        }
        else
        {
            printf("\nSua quantidade de Memoria RAM NAO atende aos requisitos do seu Sistema Operacional");
        }

        break;

    default:
        printf("Erro: Codigo de Sistema Operacional invalido!\n");

        break;
    }

    return 0;
}