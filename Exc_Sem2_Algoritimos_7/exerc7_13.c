/*
7.13. Elabore um programa (ou pseudocódigo) que leia o preço de três produtos adquiridos em um
supermercado e calcule o valor total da compra, exibindo o resultado ao final da execução.
*/

#include <stdio.h>
int main()
{
    float produto1, produto2, produto3, valorTotal;

    printf("Digite o valor do produto 1: ");
    scanf("%f", &produto1);

    printf("Digite o valor do produto 2: ");
    scanf("%f", &produto2);

    printf("Digite o valor do produto 3: ");
    scanf("%f", &produto3);

    valorTotal = produto1 + produto2 + produto3;

    printf("O valor total da sua compra eh: R$%.2f", valorTotal);

    return 0;
}