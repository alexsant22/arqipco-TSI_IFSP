/*
2.3. Escreva um programa que leia 10 (dez) valores inteiros e calcule a soma apenas dos valores
ímpares informados pelo usuário.
*/

#include <stdio.h>
int main()
{
    int numero;
    int soma = 0; // Inicia a soma com valor 0

    printf("Digite 10 numeros inteiros:\n");

    // Laço para repitir 10x
    for (int contador = 1; contador <= 10; contador++)
    {
        printf("Digite o numero %d: ", contador); // Vai pedindo o número pro usuário de acordo com a contagem até 10
        scanf("%d", &numero);

        // Verifica se o número informado é par ou ímpar
        if (numero % 2 != 0)
        {
            soma = soma + numero; // Vai adicionar o 'numero' à 'soma' e somar tbm
        }
    }

    // Saída da soma dos valores ímpares
    printf("O valor da soma dos numeros impares sao: %d", soma);

    return 0;
}