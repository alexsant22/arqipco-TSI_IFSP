/*
2.1. Escreva um programa que leia a quantidade de acessos ao sistema e exiba uma mensagem
numerada para cada acesso realizado. Exemplo: Para a leitura do valor 2, a saída deverá ser:
Acesso 1 registrado
Acesso 2 registrado
*/

#include <stdio.h>
int main()
{
    int quantidade;

    // Solicitar a quantidade de acessos
    printf("Digite a quantidade de acessos no sistema: ");
    scanf("%d", &quantidade);

    // Laço de repetição que começa em 1 e vai até a 'quantidade' informada
    for (int contador = 1; contador <= quantidade; contador++)
    {
        printf("\nAcesso %d registrado\n", contador);
    }

    return 0;
}