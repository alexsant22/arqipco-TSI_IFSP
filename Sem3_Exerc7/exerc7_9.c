/*
7.9. Escreva um programa que priorize uma tarefa de acordo com as seguintes regras:
• a urgência for maior ou igual a 8 OU
• se a urgência for maior ou igual a 5 E o impacto for maior ou igual a 7
Exiba "Tarefa priorizada" quando a condição for satisfeita.
*/

#include <stdio.h>
int main()
{
    int urgencia, impacto;

    printf("Digite o valor da urgencia (0 a 10): ");
    scanf("%d", &urgencia);

    printf("");
    printf("Digite o valor do impacto (0 a 10): ");
    scanf("%d", &impacto);

    if ((urgencia >= 8) || (urgencia >= 5 && impacto >= 7))
    {
        printf("Tarefa priorizada");
    }
    else
    {
        printf("Tarefa nao priorizada");
    }

    return 0;
}