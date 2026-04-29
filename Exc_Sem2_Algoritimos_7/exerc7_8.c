/*
7.8. Elabore um programa (ou pseudocódigo) que leia dois números reais informados pelo usuário e
calcule:
− a soma desses números;
− o produto (multiplicação) entre eles.
Os dois resultados devem ser apresentados ao final da execução.
*/

#include <stdio.h>
int main()
{
    float num1;
    float num2;
    float soma;
    float produto;

    printf("Digite o valor do primeiro numero:\n");
    scanf("%f", &num1);

    printf("Digite o valor do segundo numero:\n");
    scanf("%f", &num2);

    soma = num1 + num2;

    produto = num1 * num2;

    printf("O valor da soma entre %.2f e %.2f, eh:%.2f\n", num1, num2, soma);
    printf("O produto entre %.2f e %.2f, eh: %.2f\n", num1, num2, produto);

    return 0;
}