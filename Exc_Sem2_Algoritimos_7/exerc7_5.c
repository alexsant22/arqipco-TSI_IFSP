/*
7.5. Elabore um programa (ou pseudocódigo) que leia o valor do lado de um quadrado, calcule sua
área e exiba o resultado.
Observação: A área de um quadrado é calculada multiplicando-se o lado por ele mesmo.
*/

#include <stdio.h>
int main()
{
    float lado;
    float area;

    printf("Digite o valor do lado do quadrado:\n");
    scanf("%f", &lado);

    area = lado * lado;

    printf("O valor da area do quadrado eh: %.2f", area);

    return 0;
}