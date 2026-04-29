/*
2.9. Elabore um programa que leia 15 números inteiros e informe:
- quantos são múltiplos de 3
- quantos são múltiplos de 5
- quantos são múltiplos de ambos
*/

#include <stdio.h>
int main()
{
    int numero;
    // Inicializando TODOS os contadores com zero
    int tresMultiplos = 0, cincoMultiplos = 0, ambosMultiplos = 0;

    printf("Digite 15 numeros inteiros:\n");

    // Laço de 15 repetições
    for (int contador = 1; contador <= 15; contador++)
    {
        printf("\nDigite o numero %d: ", contador); // Pedindo o número de acordo com a contagem
        scanf("%d", &numero);

        // Verificação dos números para classificação
        if (numero % 3 == 0)
        {
            tresMultiplos++;
        }
        if (numero % 5 == 0)
        {
            cincoMultiplos++;
        }
        if ((numero % 3 == 0) && (numero % 5 == 0))
        {
            ambosMultiplos++;
        }
    }

    // Exibindo os resultados finais
    printf("\n--- Resultados dos Multiplos ---\n");
    printf("Quantidade de Multiplos de Tres: %d", tresMultiplos);
    printf("Quantidade de Multiplos de Cinco: %d", cincoMultiplos);
    printf("Quantidade de Multiplos de Ambos: %d", ambosMultiplos);

    return 0;
}