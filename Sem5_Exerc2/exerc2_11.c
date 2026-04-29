/*
2.11. Elabore um programa que leia 10 números inteiros e informe quantas vezes ocorrem valores
consecutivos iguais (exemplo: 7 seguido de 7).
*/

#include <stdio.h>
int main()
{
    int numero;
    int numeroAnterior;
    int qtdNmrConsecutivos = 0; // Contador de números consecutivos

    printf("Digite 10 numeros inteiros:\n");

    // Laço de 10x
    for (int contador = 1; contador <= 10; contador++)
    {
        printf("Digite o numero %d: ", contador); // Pedindo os números de acordo com o contador
        scanf("%d", &numero);

        // Verificação de dias consecutivos
        if (contador > 1) // Se NÃO for o primeiro número pedido
        {
            if (numero == numeroAnterior)
            {
                qtdNmrConsecutivos++;
            }
        }

        // Se for o primeiro número pedido ele vai salvar para fazer a comparação
        numeroAnterior = numero;
    }

    // Exibindo resultado da quantidade de números consecutivos digitado
    printf("Quantidade de numeros consecutivos lidos: %d", qtdNmrConsecutivos);

    return 0;
}