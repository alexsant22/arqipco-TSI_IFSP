/*
7.11. Uma loja permite que seus clientes realizem compras parceladas. Elabore um programa (ou
pseudocódigo) que leia:
− o valor de cada parcela;
− a quantidade de parcelas.
Calcule e mostre o valor total da compra
*/

#include <stdio.h>
int main()
{
    float valorParcela;
    int quantidadeParcelas;
    float valorTotal;

    printf("Digite o valor de cada parcela: ");
    scanf("%f", &valorParcela);

    printf("Digite a quantidade de parcelas: ");
    scanf("%d", &quantidadeParcelas);

    valorTotal = valorParcela * quantidadeParcelas;

    printf("O valor total da compra eh: %.2f\n", valorTotal);

    return 0;
}