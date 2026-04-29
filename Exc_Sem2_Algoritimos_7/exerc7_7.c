/*
7.7. Elabore um programa (ou pseudocódigo) que leia o valor de uma compra e calcule o valor total a
ser pago, considerando a aplicação de um imposto de 8% sobre o valor informado.
O algoritmo deve exibir:
− o valor do imposto calculado.
− o valor total da compra após a aplicação do imposto.
*/

#include <stdio.h>
int main()
{
    float valorCompra;
    const float IMPOSTO = 0.08;
    float valorImposto;
    float valorTotal;

    printf("Digite o valor da sua compra:\n");
    scanf("%f", &valorCompra);

    valorImposto = valorCompra * IMPOSTO;

    valorTotal = valorCompra + valorImposto;

    printf("O valor do imposto calculado eh: %.2f\n", valorImposto);
    printf("O valor total da compra apos a aplicacao do imposto, eh: %.2f", valorTotal);

    return 0;
}