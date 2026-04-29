/*
7.10. Escreva um programa que aprove uma compra de acordo com as seguintes regras:
• o saldo for maior ou igual ao valor da compra OU
• se houver limite de crédito disponível (1)
Exiba "Compra aprovada" quando a condição for satisfeita.
*/

#include <stdio.h>
int main()
{
    float saldo, valorCompra;
    int limiteCredito;

    printf("Digite o seu Saldo: R$");
    scanf("%f", &saldo);

    printf("");
    printf("Digite o valor da compra: R$");
    scanf("%f", &valorCompra);

    printf("");
    printf("Digite se tem limite de credito disponivel (1 ou 0): ");
    scanf("%d", &limiteCredito);

    if ((saldo >= valorCompra) || (limiteCredito == 1))
    {
        printf("Compra aprovada");
    }
    else
    {
        printf("Compra nao aprovada");
    }

    return 0;
}