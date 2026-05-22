/*
8.5. Escreva um programa que leia 8 (oito) números inteiros e:
    1) Calcule a média dos valores
    2) Crie um novo vetor (mesmo tamanho) contendo apenas os valores acima da média
    3) Exiba esse novo vetor
*/

#include <stdio.h>

int main()
{
    int numeros[8];
    int acimaMedia[8];
    int i, quantidade = 0;
    float soma = 0, media;

    // Leitura dos números
    printf("Digite 8 numeros inteiros:\n");

    for (i = 0; i < 8; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    // Cálculo da média
    media = soma / 8;

    // Criando vetor com valores acima da média
    for (i = 0; i < 8; i++)
    {
        if (numeros[i] > media)
        {
            acimaMedia[quantidade] = numeros[i];
            quantidade++;
        }
    }

    // Exibindo resultados
    printf("\nMedia dos valores: %.2f\n", media);

    printf("Valores acima da media:\n");

    if (quantidade == 0)
    {
        printf("Nenhum valor acima da media.\n");
    }
    else
    {
        for (i = 0; i < quantidade; i++)
        {
            printf("%d ", acimaMedia[i]);
        }
    }

    printf("\n");

    return 0;
}