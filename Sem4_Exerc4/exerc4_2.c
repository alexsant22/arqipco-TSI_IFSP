/*
4.2. Um programa deve ler o código de um produto e exibir suas informações. Os produtos disponíveis
são:
 Código 1: produto café, valor 2 reais e 90 centavos
 Código 2: produto cappuccino, valor 3 reais e 50 centavos
 Código 3: produto chocolate, valor 4 reais e 20 centavos
Regras:
 Se o código informado corresponder a um produto cadastrado, o programa deve exibir o nome do
produto e e o seu valor
 Caso contrário, deve exibir a mensagem: “Produto não cadastrado”
*/

#include <stdio.h>
int main()
{
    int codigo;

    printf("Digite o numero do codigo do produto:\n");
    scanf("%d", &codigo);

    if (codigo == 1)
    {
        printf("\nProduto: Cafe\nValor: R$02,90");
    }
    else if (codigo == 2)
    {
        printf("Produto: Cappuccino\nValor: R$03,50");
    }
    else if (codigo == 3)
    {
        printf("Produto: Chocolate\nValor: R$04,20");
    }
    else
    {
        printf("\nProduto nao cadastrado");
    }

    return 0;
}
