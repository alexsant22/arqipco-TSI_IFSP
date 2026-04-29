/*
4.8. Escreva um programa que leia o tamanho de uma senha (quantidade de caracteres) e classifique:
• Até 5: fraca
• 6 a 10: média
• Acima de 10: forte
*/

#include <stdio.h>
int main()
{
    int quantidadeCaracteres;

    printf("Digite o tamanho de sua senha (quantidade de caracteres): ");
    scanf("%d", &quantidadeCaracteres);

    if (quantidadeCaracteres <= 5)
    {
        printf("\nSua senha eh considerada FRACA.");
    }
    else if (quantidadeCaracteres > 10)
    {
        printf("\nSua senha eh considerada FORTE.");
    }
    else
    {
        printf("\nSua senha eh considerada MEDIA.");
    }

    return 0;
}