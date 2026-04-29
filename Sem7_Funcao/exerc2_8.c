/*
2.8. Escreva um programa que implemente uma função int calcularMaior(int numero1, int numero2, int numero3)
que retorne o maior entre três números inteiros.
*/

#include <stdio.h>

int calcularMaior(int numero1, int numero2, int numero3)
{
    int maiorNmr = numero1;

    if (maiorNmr < numero2)
    {
        maiorNmr = numero2;
    }
    if (maiorNmr < numero3)
    {
        maiorNmr = numero3;
    }

    return maiorNmr;
}

int main()
{
    int num1, num2, num3;

    printf("Digite o numero 1: ");
    scanf("%d", &num1);

    printf("\nDigite o numero 2: ");
    scanf("%d", &num2);

    printf("\nDigite o numero 3: ");
    scanf("%d", &num3);

    int resultado = calcularMaior(num1, num2, num3);

    printf("O maior valor entre os tres foi: %d", resultado);

    return 0;
}