/*
2.4. Escreva um programa que leia um número inteiro positivo e exiba uma contagem decrescente até
zero.
*/

#include <stdio.h>
int main()
{
    int numero;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &numero);

    // 1. Onde começa: No valor que o usuário digitou (contador = numero)
    // 2. Até onde vai: Enquanto for maior ou igual a zero (contador >= 0)
    // 3. Como chega lá: Dando um passo para trás por vez (contador--)
    for (int contador = numero; contador >= 0; contador--)
    {
        // Exibe o número atual da contagem
        printf("\n%d\n", contador);
    }

    return 0;
}