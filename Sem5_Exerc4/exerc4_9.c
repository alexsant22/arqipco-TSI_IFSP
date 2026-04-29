/*
4.9. Escreva um programa para pedágios que leia o tipo de veículo (1 – carro, 2 – caminhão) e o
número de eixos, aplique as regras a seguir e exiba o valor total a pagar:
• Carro paga valor fixo
• Caminhão paga por eixo
*/

#include <stdio.h>
int main()
{
    int menu, quantidadeEixos;
    float pedagio;

    printf("Menu - Tipo de Veiculo:\n");
    printf("1 - Carro\n");
    printf("2 - Caminhao\n");
    printf("Digite o codigo: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        pedagio = 6;

        printf("\nO valor a ser pago do pedagio eh: R$%.2f", pedagio);
        break;

    case 2:
        printf("\nDigite a quantidade de eixos do caminhao: ");
        scanf("%d", &quantidadeEixos);

        pedagio = quantidadeEixos * 8.5;

        printf("\nQuantidade de Eixos: %d\nO valor a ser pago do pedagio eh: R$%.2f", quantidadeEixos, pedagio);
        break;

    default:
        printf("Erro: Opcao de menu invalida!");
        break;
    }

    return 0;
}