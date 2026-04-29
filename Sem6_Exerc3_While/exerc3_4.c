/*
3.4. Escreva um programa que leia números inteiros até que seja digitado 0. Calcule:
- A soma dos números positivos
- A quantidade de números negativos
*/

#include <stdio.h>
int main()
{
    int nmr;
    int soma = 0;
    int qtdNmrNegativos = 0;

    // Pedindo número para iniciar o while
    printf("Digite um numero inteiro (ou digite 0 para finalizar): ");
    scanf("%d", &nmr);

    while (nmr != 0)
    {
        // Somando os números positivos informados
        if (nmr > 0)
        {
            soma = soma + nmr;
        }
        else if (nmr < 0) // Contando números negativos digitados
        {
            qtdNmrNegativos++;
        }

        // Pedindo novamente número para continuar o while
        printf("\nDigite um numero inteiro (ou digite 0 para finalizar): ");
        scanf("%d", &nmr);
    }

    // Exibindo resultados
    printf("\nSoma dos valores positivos digitados foi: %d", soma);
    printf("\nQuantidade de valores negativos digitados foi: %d", qtdNmrNegativos);

    return 0;
}