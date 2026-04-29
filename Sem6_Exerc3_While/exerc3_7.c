/*
3.7. Escreva um programa que simule o jogo 21. O jogador recebe valores entre 1 e 10 (representando
cartas) e deve acumulá-los até decidir parar ou ultrapassar 21. O programa deve continuar
enquanto o jogador desejar e a soma for menor que 21. Se atingir 21, vence. Se ultrapassar 21,
perde
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // Define a semente baseada no tempo atual
    srand(time(NULL));

    int soma = 0;
    int escolha;       // 1 para comprar mais uma carta || 0 para parar
    int cartaSorteada; // Carta aleatória entre 10 e 1

    // do - while
    do
    {
        // Começa com o sortei da carta
        cartaSorteada = rand() % 10 + 1;

        // somando as cartas
        soma = soma + cartaSorteada;

        // Mostrando dados pro usuário
        printf("Vc tirou a carta %d.\nSoma atual: %d.", cartaSorteada, soma);

        // Perguntando se quer comprar mais ou não antes de completar 21
        if (soma < 21)
        {
            printf("\nDeseja comprar mais uma carta? (1 - SIM || 0 - NAO (parar)): ");
            scanf("%d", &escolha);
        }

    } while ((soma < 21) && (escolha == 1));

    // Verificando resultados
    if (soma == 21)
    {
        printf("Vc venceu!");
    }
    else if (soma > 21)
    {
        printf("Vc perdeu / estourou.");
    }
    else
    {
        printf("Vc decidiu parar com %d pontos.", soma);
    }

    return 0;
}