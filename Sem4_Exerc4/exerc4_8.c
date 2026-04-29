/*4.8. Escreva um programa que leia o preço de um produto, calcule o novo preço com base em um
percentual de aumento e determine a classificação desse novo valor.
Regras:
 Se o preço for menor ou igual a 50 reais, o aumento é de 10%
 Se o preço for maior que 50 reais e menor ou igual a 100 reais, o aumento é de 20%
 Se o preço for maior que 100 reais, o aumento é de 30%

Após calcular o novo preço, a classificação deve seguir:
 Se o novo preço for menor ou igual a 80 reais, a classificação é “Barato”
 Se o novo preço for maior que 80 reais e menor ou igual a 120 reais, a classificação é “Normal”
 Se o novo preço for maior que 120 reais e menor ou igual a 200 reais, a classificação é “Caro”
 Se o novo preço for maior que 200 reais, a classificação é “Muito caro”
O programa deve exibir o valor do aumento, o novo preço e a classificação final.
*/

#include <stdio.h>
int main()
{
    float precoProduto, aumento, novoPreco;

    printf("Digite o preco do seu produto:\nR$ ");
    scanf("%f", &precoProduto);

    if (precoProduto <= 50)
    {
        aumento = 0.10;

        novoPreco = precoProduto + (precoProduto * aumento);
    }
    else if (precoProduto > 100)
    {
        aumento = 0.30;

        novoPreco = precoProduto + (precoProduto * aumento);
    }
    else
    {
        aumento = 0.20;

        novoPreco = precoProduto + (precoProduto * aumento);
    }

    // printf("\nValor do aumento: R$%.2f", aumento); // Apenas para verificação
    // printf("\nNovo preco: R$%.2f", novoPreco);     // Apenas para verificação

    if (novoPreco <= 80)
    {
        printf("\nValor do aumento: R$%.2f\nNovo preco: R$%.2f\nClassificacao: Barato", aumento, novoPreco);
    }
    else if ((novoPreco > 80) && (novoPreco <= 120))
    {
        printf("\nValor do aumento: R$%.2f\nNovo preco: R$%.2f\nClassificacao: Normal", aumento, novoPreco);
    }
    else if (novoPreco > 200)
    {
        printf("\nValor do aumento: R$%.2f\nNovo preco: R$%.2f\nClassificacao: Muito Caro", aumento, novoPreco);
    }
    else
    {
        printf("\nValor do aumento: R$%.2f\nNovo preco: R$%.2f\nClassificacao: Caro", aumento, novoPreco);
    }

    return 0;
}