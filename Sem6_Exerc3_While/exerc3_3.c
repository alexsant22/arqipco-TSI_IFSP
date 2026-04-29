/*
3.3. Escreva um programa que leia vários números inteiros positivos até que um número negativo seja
digitado. Após, exiba o maior valor informado
*/

#include <stdio.h>
int main()
{
    int numero;
    int maiorValor = 0; // O maior número deve inciar com valor 0

    // Pedindo valor para a condição do While
    printf("Digite um numero inteiro (Digite um valor negativo para parar): ");
    scanf("%d", &numero);

    while (numero >= 0) // Verificação do primeiro valor informado
    {
        // Verificação para descobrir o maior valor de acordo com o número informado
        if (numero > maiorValor)
        {
            maiorValor = numero;
        }

        // Pedindo novamente o número
        printf("\nDigite um numero inteiro (Digite um valor negativo para parar): ");
        scanf("%d", &numero);
    }

    // Exibindo o maior valor
    printf("O maior valor digitado foi: %d.", maiorValor);

    return 0;
}