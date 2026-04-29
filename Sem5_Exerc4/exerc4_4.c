/*
4.4. Escreva um programa que leia um código de acesso e um código de verificação:
• Se o código de acesso estiver correto, verifique o código de verificação (ex: 9999).
• Caso contrário, informe erro de acesso.
*/

#include <stdio.h>

int main()
{
    int codigo_acesso;
    int codigo_verificacao;

    // Definindo os códigos corretos no sistema
    int acesso_correto = 1234;
    int verificacao_correta = 9999;

    // Solicita o primeiro código
    printf("Digite o codigo de acesso: ");
    scanf("%d", &codigo_acesso);

    // Verifica se o código de acesso está correto
    if (codigo_acesso == acesso_correto)
    {

        // Se o acesso estiver correto, pede e verifica o segundo código
        printf("Acesso parcial liberado. Digite o codigo de verificacao: ");
        scanf("%d", &codigo_verificacao);

        if (codigo_verificacao == verificacao_correta)
        {
            printf("Sucesso! Acesso total liberado.\n");
        }
        else
        {
            printf("Erro: Codigo de verificacao incorreto.\n");
        }
    }
    else
    {
        // Se o código de acesso já estiver errado, barra na hora
        printf("Erro de acesso: Codigo de acesso invalido!\n");
    }

    return 0;
}