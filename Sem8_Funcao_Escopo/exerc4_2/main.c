/*
4.2. Escreva um programa que implemente funções para somar, encontrar o maior e o menor valor
de um array. Utilize vários arquivos para a organização do código.
*/

#include <stdio.h>
#include "operacoes.h" // Arquivo de cabeçalho

int main()
{
    int tamanho; // Tamanho do array

    // Pedindo o tamanho
    printf("Digite quantos numeros quer digitar: ");
    scanf("%d", &tamanho);

    int meusNumeros[tamanho]; // Criando o array com o tamanho informado

    // Lendo os números um por um
    printf("\nDigite os %d numeros:\n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("Numero %d: ", i + 1); // i + 1 é só para a tela mostrar "Numero 1" em vez de "Numero 0"
        scanf("%d", &meusNumeros[i]);
    }

    // Calculando os resultados chamando as suas funções
    int resultadoSoma = somar(meusNumeros, tamanho);
    int resultadoMaior = acharMaior(meusNumeros, tamanho);
    int resultadoMenor = acharMenor(meusNumeros, tamanho);

    // Mostrando tudo na tela
    printf("\n--- RESULTADOS ---\n");
    printf("Soma total: %d\n", resultadoSoma);
    printf("Maior valor: %d\n", resultadoMaior);
    printf("Menor valor: %d\n", resultadoMenor);

    return 0;
}