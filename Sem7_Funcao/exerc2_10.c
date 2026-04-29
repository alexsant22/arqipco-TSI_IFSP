/*
2.10. Escreva um programa que implemente um jogo de adivinhação de números. O programa deve
gerar um número inteiro aleatório dentro de um intervalo definido (por exemplo, de 1 a 100), e o
usuário deve tentar adivinhar esse número.
A cada tentativa, o programa deve informar se o valor digitado é maior, menor ou igual ao número
secreto. O jogo deve continuar até que o usuário acerte.
Requisitos:
- O programa deve utilizar funções.
- Implementar, no mínimo, funções para:
    o Gerar o número aleatório;
    o Verificar o palpite do usuário em relação ao número secreto;
    o Exibir mensagens ao usuário (dicas ou resultado).
- Contabilizar a quantidade de tentativas realizadas.
- Exibir, ao final, o número de tentativas necessárias para acertar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumeroAleatorio()
{
    int numeroAleatorio = rand() % 100 + 1; // Gera um número aleatório de 1 a 100

    return numeroAleatorio;
}

int verificarPalpite(int palpite, int numeroSecreto)
{
    if (palpite > numeroSecreto)
    {
        return 1; // Chutou alto
    }
    else if (palpite < numeroSecreto)
    {
        return 2; // Chutou baixo
    }
    else
    {
        return 0; // Acertou
    }
}

void exibirMensagem(int status)
{
    if (status == 1)
    {
        printf("\nChutou alto! Tente um numero menor.");
    }
    else if (status == 2)
    {
        printf("\nChutou baixo! Tente um numero maior.");
    }
    else
    {
        printf("\nParabens! Voce acertou!");
    }
}

int main()
{
    srand(time(NULL));

    int numeroSorteado = gerarNumeroAleatorio(); // Gerando o número aleatório de acordo com a função
    int palpite;                                 // Salvar o papite que o usuário digitar
    int tentativas = 0;                          // Contador para tentativas (iniciado sempre em 0)
    int status;                                  // Status para saber se ganhou ou não para a função 'exibirMensagem(int status)'

    do
    {
        // Pedindo valor
        printf("\nDigite um valor de 1 a 100: ");
        scanf("%d", &palpite);

        tentativas++; // Somando tentativas

        // Chamando função para verificar o número se está certo ou não
        status = verificarPalpite(palpite, numeroSorteado); // Salvando o resultado na variavel 'status'

        // Exibindo resultado da msg de acordo com o status
        exibirMensagem(status);
    } while (status != 0);

    // Exibindo quantas tentativas foram utilizadas
    printf("\nA quantidade de tentativas foi: %d", tentativas);

    return 0;
}