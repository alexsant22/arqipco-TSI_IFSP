/*
8.6. Escreva um programa que leia 5 (cinco) números inteiros e:
    1) Ordene os valores em ordem crescente
    2) Em seguida, exiba também os valores em ordem decrescente (sem reordenar novamente o
    vetor)
*/

#include <stdio.h>

int main()
{
    int numeros[5];
    int i, j, temp;

    // Leitura dos números
    printf("Digite 5 numeros inteiros:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Ordenação crescente (Bubble Sort)
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Exibição crescente
    printf("\nValores em ordem crescente:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numeros[i]);
    }

    // Exibição decrescente sem reordenar
    printf("\n\nValores em ordem decrescente:\n");

    for (i = 4; i >= 0; i--)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}