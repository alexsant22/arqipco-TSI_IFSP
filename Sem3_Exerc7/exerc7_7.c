/*
7.7. Escreva um programa que leia a idade do usuário e bloqueie o conteúdo se a idade for menor do
que 18.
*/

#include <stdio.h>
int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Conteudo BLOQUEADO - Menor de idade.");
    }
    else
    {
        printf("Conteudo LIBERADO - Maior de idade.");
    }

    return 0;
}