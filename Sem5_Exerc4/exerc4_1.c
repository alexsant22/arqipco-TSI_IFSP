/*
4.1. Escreva um programa que leia um número inteiro. Se ele for múltiplo de 7, exiba a mensagem:
“Número especial encontrado!”.
*/

#include <stdio.h>
int main()
{
    int nmr;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &nmr);

    if (nmr % 7 == 0)
    {
        printf("O numero %d, numero especial encontrado!", nmr);
    }
    else
    {
        printf("O numero nao eh especial.");
    }

    return 0;
}