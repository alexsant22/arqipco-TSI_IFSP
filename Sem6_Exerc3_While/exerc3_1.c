/*
3.1. Escreva um programa que leia números inteiros até que um valor negativo seja informado. Exiba
todos os valores digitados.
Utilize while
*/

#include <stdio.h>
int main()
{
    int numero;

    // Pedindo o número para iniciar validação
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        // Imprimindo o número se ele for positivo
        printf("\nValor digitado: %d.\n", numero);

        // Pede um número novamente
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &numero);
    }

    // Caso de errado e for um número negativo
    printf("\nPrograma encerrado.");

    return 0;
}