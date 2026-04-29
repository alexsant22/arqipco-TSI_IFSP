/*
4.7. Um sistema de descontos considera duas informações:
 Se o cliente é VIP
 Se o valor da compra é maior que 1000 reais
As regras são:
 Cliente VIP recebe 20% de desconto
 Compras acima de 1000 reais recebem 10% de desconto
 Se o cliente for VIP e a compra for acima de 1000 reais, o desconto é de 25%
Escreva um programa que determine o percentual de desconto.
*/

#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool isVip;
    float valorCompra;

    printf("O usuario eh um cliente VIP? Sim ou Nao (1 ou 0):\n");
    scanf("%d", &isVip);

    printf("Digite o valor da compra:\nR$ ");
    scanf("%f", &valorCompra);

    if ((isVip == true) && (valorCompra > 1000))
    {
        printf("\nRecebeu 25%% de desconto");
    }
    else if (isVip == true)
    {
        printf("\nRecebeu 20%% de desconto");
    }
    else if (valorCompra > 1000)
    {
        printf("\nRecebeu 10%% de desconto");
    }
    else
    {
        printf("Nao recebeu desconto");
    }

    return 0;
}