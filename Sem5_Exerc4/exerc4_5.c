/*
4.5. Escreva um programa que leia um valor de saque e informe se ele pode ser sacado de acordo com
as seguintes regras:
• Apenas valores múltiplos de 10
• Limite máximo de R$ 1000
• Caso inválido, exiba o motivo
*/

#include <stdio.h>
int main()
{
    int saque;

    printf("Digite o valor de saque:\nR$ ");
    scanf("%d", &saque);

    if (saque <= 0)
    {
        printf("Erro: O valor do saque deve ser maior que zero.\n");
    }
    else if (saque > 1000)
    {
        printf("Erro: O valor do saque deve ser menor que R$1000.\n");
    }
    else if (saque % 10 != 0)
    {
        printf("Erro: Valor invalido. O caixa possui apenas notas de 10, 20, 50 e 100 (apenas multiplos de 10).\n");
    }
    else
    {
        printf("Sucesso! Saque de R$ %d autorizado. Retire o seu dinheiro.\n", saque);
    }

    return 0;
}