/*
7.3. Escreva um programa que leia 8 (oito) números reais e calcule a média dos valores.
*/

#include <stdio.h>
int main()
{
    float numeros[8];                                   // Definindo Array de 8 posições
    float soma = 0;                                     // Soma para os valores do array
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Calcula o número de elementos
    float media;

    printf("Digite 8 valores reais para calcular a media deles.\n");

    // Laço para pedir os valores
    for (int i = 0; i < 8; i++)
    {
        printf("\nDigite o valor %d: ", i + 1);
        scanf("%f", &numeros[i]);

        // somando os valores
        soma += numeros[i];
    }

    // Calcular média
    media = soma / tamanho;

    // Exibindo soma e média
    printf("\nA soma dos valores informados: %.2f", soma);
    printf("\nMedia dos valores informados: %.2f", media);

    return 0;
}