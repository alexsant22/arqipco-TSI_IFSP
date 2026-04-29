/*
7.11. Escreva um programa que leia um número e exiba "Valor válido" apenas se ele estiver entre
10 e 100 (inclusive).
*/

#include <stdio.h>
int main()
{
    int valor;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &valor);

    if ((valor >= 10) && (valor <= 100))
    {
        printf("Valor valido");
    }
    else
    {
        printf("O valor nao eh valido");
    }

    return 0;
}