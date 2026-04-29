/*
2.9. Escreva um programa que implemente uma função int buscarElemento(int numeros[], int quantidadeElementos, int valorBuscado)
que informe se o valor está presente ou não no vetor.
*/

#include <stdio.h>

// Função que faz a busca
int buscarElemento(int numeros[], int quantidadeElementos, int valorBuscado)
{
    // O 'for' cria um laço que vai de 0 até a última posição do vetor.
    // 'i' é o nosso índice (a posição atual da caixa que estamos olhando).
    for (int i = 0; i < quantidadeElementos; i++)
    {
        // Comparamos o número que está na posição 'i' com o valor que queremos achar
        if (numeros[i] == valorBuscado)
        {
            // Se forem iguais, achamos!
            // O 'return 1' encerra a função IMEDIATAMENTE e devolve 1 ("Verdadeiro").
            return 1;
        }
    }

    // Se o laço 'for' rodar inteiro e nunca entrar no 'if' acima,
    // significa que olhamos todas as posições e o número não estava lá.
    // Então, retornamos 0 ("Falso").
    return 0;
}

int main()
{
    // Criamos um vetor já preenchido com 5 números para testar
    int meuVetor[5] = {10, 25, 42, 55, 89};
    int quantidade = 5; // Sabemos que o vetor tem 5 posições
    int valor;

    // Pedimos ao usuário qual número ele quer procurar
    printf("Os numeros escondidos estao entre 10 e 90.\n");
    printf("Digite um valor para buscar no vetor: ");
    scanf("%d", &valor);

    // Chamamos a função passando o vetor, a quantidade de itens e o valor buscado
    int resultado = buscarElemento(meuVetor, quantidade, valor);

    // Analisamos a resposta da função (1 ou 0) para exibir a mensagem correta
    if (resultado == 1)
    {
        printf("\n=> O valor %d ESTA presente no vetor!\n", valor);
    }
    else
    {
        printf("\n=> O valor %d NAO esta presente no vetor.\n", valor);
    }

    return 0;
}