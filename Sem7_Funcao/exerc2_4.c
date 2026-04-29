/*
2.4. Escreva um programa que implemente uma função int maiorNumero(int numero1, int numero2)
que retorne o maior entre dois números inteiros.
*/

#include <stdio.h>

int maiorNumero(int numero1, int numero2)
{
    int numeroMaior;

    if (numero1 > numero2)
    {
        numeroMaior = numero1;
    }
    else
    {
        numeroMaior = numero2;
    }

    return numeroMaior;
}

int main()
{
    int num1, num2;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num1);

    printf("\nDigite um outro valor inteiro: ");
    scanf("%d", &num2);

    int resultado = maiorNumero(num1, num2);

    printf("Entre %d e %d, o maior eh: %d", num1, num2, resultado);

    return 0;
}