/*
7.1. Escreva um programa para verificar se o sistema possui atualização disponível (1 ou 0). Se houver,
exiba: "Atualização disponível". Caso contrário, não exiba nada.
*/

#include <stdio.h>
int main()
{
    int atualizacao;

    printf("O sistema tem atualizacao? (Digite 1 ou 0): ");
    scanf("%d", &atualizacao);

    if (atualizacao == 1)
    {
        printf("Atualizacao disponivel! :p\n");
    }
    else
    {
        printf("Atualizacao indisponivel. :(\n");
    }

    return 0;
}