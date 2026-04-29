/*
7.4. Escreva um programa que leia 7 (sete) números inteiros e determine o maior valor armazenado.
*/

#include <stdio.h>
int main()
{
    int numeros[7]; // Array de 7 posições
    int maiorValor;

    printf("Digite 7 valores inteiros para saber o maior:\n");

    // Pedindo o primeiro valor apenas para salvar no array e na variavel 'maiorValor'
    printf("\nDigite o valor 1: ");
    scanf("%d", &numeros[0]); // Salvando na posição 0 (a primeira posição do array)

    maiorValor = numeros[0]; // O maior valor inicia com o primeiro valor salvo no array

    // Laço para pedir valores
    for (int i = 1; i < 7; i++) // Laço vai pedir apenas a partir da posição 1 (seria no caso a partir do segundo número)
    {
        printf("\nDigite o valor %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verificação de valores
        if (numeros[i] > maiorValor)
        {
            maiorValor = numeros[i];
        }
    }

    // Exibindo maior valor
    printf("\nO maior valor informado foi: %d", maiorValor);

    return 0;
}