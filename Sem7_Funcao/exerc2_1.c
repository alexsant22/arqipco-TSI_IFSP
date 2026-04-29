/*
2.1. Escreva um programa que implemente uma função void exibirMensagem() para imprimir na
tela uma mensagem de boas-vindas.
*/

#include <stdio.h>
void exibirMensagem()
{
    printf("\nBem vindo ao primeiro exercicio de funcao!\n");
}

int main()
{
    // Chamando função para rodar na main()
    exibirMensagem();

    return 0;
}