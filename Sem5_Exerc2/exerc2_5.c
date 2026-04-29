/*
2.5. Escreva um programa que leia 10 números inteiros e informe quantos estão no intervalo entre 10
e 20 (inclusive).
*/

#include <stdio.h>
int main()
{
    int numero;
    int quantidade = 0; // A 'quantidade' inica em 0 e dps acrescenta de acordo com o contador da verificação

    printf("Digite 10 numeros inteiros:\n");

    // Laço para repetir 10x
    for (int contador = 1; contador <= 10; contador++)
    {
        printf("Digite o numero %d: ", contador); // Pede o número de acordo com o contador até 10x
        scanf("%d", &numero);

        // Verificação de quanto números informadors estão entre 10 e 20
        if ((numero >= 10) && (numero <= 20))
        {
            quantidade++;
        }
    }

    // Exibindo quantos números estavam ente 10 e 20
    printf("\nA quantidade de numeros entre 10 e 20 foi: %d", quantidade);

    return 0;
}