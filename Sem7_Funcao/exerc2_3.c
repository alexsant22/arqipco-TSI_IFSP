/*
2.3. Escreva um programa que implemente uma função float calcularMedia(float nota1, float nota2) que retorne a média de duas notas.
*/

#include <stdio.h>

float calcularMedia(float nota1, float nota2)
{
    float soma = nota1 + nota2;

    float media = soma / 2.0;

    return media;
}

int main()
{
    float n1, n2;

    // Pedindo notas
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);

    // Chamando função para calcular e pegando resultado
    float resultado = calcularMedia(n1, n2);

    // Exibindo média;
    printf("\nA media das notas foi: %.2f", resultado);

    return 0;
}