/*
7.2. Escreva um programa que leia um valor inteiro representando o nível de bateria (0 a 100). Exiba
"Bateria baixa" se o valor for menor do que 20.
*/

#include <stdio.h>
int main()
{
    int nivelBateria;

    printf("Digite o percentual da sua bateria (0 a 100): ");
    scanf("%d", &nivelBateria);

    if (nivelBateria < 20)
    {
        printf("Bateria baixa");
    }

    return 0;
}