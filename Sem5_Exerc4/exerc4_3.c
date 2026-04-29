/*
4.3. Escreva um programa que leia o código da região de entrega, atribua um valor de frete diferente
para cada região e exiba o valor para a região selecionada.
1 – Norte
2 – Nordeste
3 – Centro-Oeste
4 – Sudeste
5 – Sul
*/

#include <stdio.h>
int main()
{
    int codigo_regiao;
    float valor_frete;

    printf("Tabela de Regioes de Entrega:\n");
    printf("1 - Norte\n");
    printf("2 - Nordeste\n");
    printf("3 - Centro-Oeste\n");
    printf("4 - Sudeste\n");
    printf("5 - Sul\n");

    printf("\nDigite o codigo da regiao desejada: ");
    scanf("%d", &codigo_regiao);

    // Estrutura condicional para verificar o código digitado
    switch (codigo_regiao)
    {
    case 1:
        valor_frete = 50.00;
        printf("Regiao: Norte. Valor do frete: R$ %.2f\n", valor_frete);
        break;
    case 2:
        valor_frete = 40.00;
        printf("Regiao: Nordeste. Valor do frete: R$ %.2f\n", valor_frete);
        break;
    case 3:
        valor_frete = 30.00;
        printf("Regiao: Centro-Oeste. Valor do frete: R$ %.2f\n", valor_frete);
        break;
    case 4:
        valor_frete = 15.00;
        printf("Regiao: Sudeste. Valor do frete: R$ %.2f\n", valor_frete);
        break;
    case 5:
        valor_frete = 25.00;
        printf("Regiao: Sul. Valor do frete: R$ %.2f\n", valor_frete);
        break;
    default:
        // O caso default é executado se o usuário digitar um número fora de 1 a 5
        printf("Erro: Codigo de regiao invalido!\n");
        break;
    }

    return 0;
}