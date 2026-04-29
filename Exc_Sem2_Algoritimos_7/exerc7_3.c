/* 7.3. Elabore um programa (ou pseudocódigo) que leia um número real informado pelo usuário, calcule
o quadrado desse número e apresente o resultado. */

#include <stdio.h>

int main()
{
    float numero, quadrado;

    printf("Digite o valor do numero para calcular ao quadrado:\n");
    scanf("%f", &numero);

    quadrado = numero * numero;

    printf("O quadrado de %.2f eh %.2f", numero, quadrado);

    return 0;
}