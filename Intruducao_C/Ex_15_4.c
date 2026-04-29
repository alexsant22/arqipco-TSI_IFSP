#include <stdio.h>

int main() {
    float n1, n2, n3;
    float p1, p2, p3;
    float media;

    // Entrada de dados para o primeiro valor
    printf("Digite o 1o numero e seu peso (ex: 7.5 2): ");
    scanf("%f %f", &n1, &p1);

    // Entrada de dados para o segundo valor
    printf("Digite o 2o numero e seu peso: ");
    scanf("%f %f", &n2, &p2);

    // Entrada de dados para o terceiro valor
    printf("Digite o 3o numero e seu peso: ");
    scanf("%f %f", &n3, &p3);

    // Cálculo da média ponderada
    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    // Exibição do resultado com 2 casas decimais
    printf("\nA media ponderada calculada e: %.2f\n", media);

    return 0;
}