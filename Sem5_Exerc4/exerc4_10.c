/*
4.10. Escreva um programa que leia um ano e informe se ele é bissexto ou não bissexto.
Observação: É preciso pesquisar como é a validação de um ano bissexto.
*/

#include <stdio.h>
int main()
{
    int ano;

    printf("Descubra se o Ano eh Bissexto.\n");
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        printf("\nO ano %d eh um Ano Bissexto.", ano);
    }
    else
    {
        printf("\nO ano %d NAO eh um Ano Bissexto.", ano);
    }

    return 0;
}