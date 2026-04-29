/*
2.2. Escreva um programa que leia 10 números inteiros e calcule a soma apenas dos valores maiores
que 50.
*/

#include <stdio.h>
int main()
{
    int numero;
    int soma = 0; // Inicia o valor de soma com 0

    printf("Digite 10 numeros inteiros:\n");

    // Laço para para rodar as 10 vezes
    for (int contador = 1; contador <= 10; contador++)
    {
        printf("Digite o numero %d: ", contador); // Vai pedindo o número pro usuário de acordo com a contagem até 10
        scanf("%d", &numero);

        // Verificação para números > 50
        if (numero > 50)
        {
            soma = soma + numero; // Se for, adiciona o valor à variável 'soma'
        }
    }

    // Dps que terminar o laço de 10 repetições ele exibe a saída
    printf("\nA soma dos valores maiores que 50 e: %d\n", soma);

    return 0;
}