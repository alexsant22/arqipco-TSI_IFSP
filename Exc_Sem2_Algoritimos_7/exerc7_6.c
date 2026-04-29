/*
7.6. Elabore um programa (ou pseudocódigo) que leia quatro notas de um estudante, calcule a média
aritmética e apresente o resultado obtido.
*/

#include <stdio.h>
int main()
{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    printf("Digite o valor da nota 1:\n");
    scanf("%f", &nota1);

    printf("Digite o valor da nota 2:\n");
    scanf("%f", &nota2);

    printf("Digite o valor da nota 3:\n");
    scanf("%f", &nota3);

    printf("Digite o valor da nota 4:\n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media das suas notas eh: %.2f", media);

    return 0;
}