/*
7.6. Escreva um programa que ative o modo econômico de acordo com as seguintes condições:
• bateria < 30 E
• não estiver carregando (0)
*/

#include <stdio.h>
int main()
{
    int bateria, carrgeando;

    printf("Digite o nivel de bateria (0 a 100) e se esta carregando (0 ou 1):\n");
    scanf("%d %d", &bateria, &carrgeando);

    if (bateria < 30 && carrgeando == 0)
    {
        printf("Modo economico - Ativado!");
    }
    else
    {
        printf("Nao eh possivel ativar o modo economico.");
    }

    return 0;
}