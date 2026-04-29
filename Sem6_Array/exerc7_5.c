/*
7.5. Escreva um programa que leia e armazene o preço unitário e a quantidade em estoque para 5
(cinco) produtos, e calcule o valor total do estoque.
*/

#include <stdio.h>
int main()
{
    float precoUnitario[5]; // Array de 5 posições para 5 preços de produtos
    int quantidade[5];      // Array de 5 posições para mostrar a quantidade de 5 produtos
    float valorTotal = 0;

    printf("Digite o preco unitario e a quantidade de 5 produtos:\n");

    // Laço para pedir as informações dos produtos
    for (int i = 0; i < 5; i++)
    {
        // Pedindo o preço primeiro
        printf("\nDigite o preco unitario do produto %d: ", i + 1);
        scanf("%f", &precoUnitario[i]);

        // Pedindo a quantidade agora
        printf("\nDigite a quantidade do produto %d: ", i + 1);
        scanf("%d", &quantidade[i]);

        // Calculando o valor do produto informado acima
        float valorProduto = precoUnitario[i] * quantidade[i];

        // Somando o valor de produto ao valor total
        valorTotal += valorProduto;
    }

    // Exibindo valor total do estoque
    printf("\nO valor total do estoque foi: R$%.2f", valorTotal);

    return 0;
}