/*
4.4. Escreva um programa que simule um caixa eletrônico com operações básicas. A partir de um saldo inicial, o programa deve fornecer as seguintes operações:
- Consultar saldo
- Realizar depósito
- Realizar saque
- Encerrar o programa

Regras de negócio:
- O saldo deve ser atualizado a cada operação.
- Saques com valores superiores ao saldo não devem ser permitidos.
- Depósitos não podem receber valores negativos.
*/

#include <stdio.h>

int main()
{
    int opcao;
    float saldo = 1000.00;
    float valor;

    do
    {
        // Menu
        printf("\n===== CAIXA ELETRONICO =====\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Realizar deposito\n");
        printf("3 - Realizar saque\n");
        printf("4 - Encerrar programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            // Consultar saldo
            printf("\nSaldo atual: R$ %.2f\n", saldo);
            break;

        case 2:
            // Deposito
            printf("\nDigite o valor do deposito: R$ ");
            scanf("%f", &valor);

            if (valor > 0)
            {
                saldo += valor;
                printf("Deposito realizado com sucesso!\n");
                printf("Novo saldo: R$ %.2f\n", saldo);
            }
            else
            {
                printf("Erro: o deposito nao pode ser negativo ou zero.\n");
            }

            break;

        case 3:
            // Saque
            printf("\nDigite o valor do saque: R$ ");
            scanf("%f", &valor);

            if (valor <= 0)
            {
                printf("Erro: valor invalido para saque.\n");
            }
            else if (valor > saldo)
            {
                printf("Erro: saldo insuficiente.\n");
            }
            else
            {
                saldo -= valor;
                printf("Saque realizado com sucesso!\n");
                printf("Novo saldo: R$ %.2f\n", saldo);
            }

            break;

        case 4:
            // Encerrar
            printf("\nPrograma encerrado.\n");
            break;

        default:
            printf("\nOpcao invalida.\n");
        }

    } while (opcao != 4);

    return 0;
}