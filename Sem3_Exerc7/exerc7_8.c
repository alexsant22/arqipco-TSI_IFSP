/*
7.8. Escreva um programa para gerenciar o recebimento de notificações pelo usuário de acordo com
as seguintes regras:
• as notificações estiverem ativadas E
• o modo silencioso não estiver ativo
Exiba "Notificação enviada" quando as condições forem atendidas.
*/

#include <stdio.h>
int main()
{
    int notoficacaoAtivada, modoSilencioso;

    printf("Digite 1 ou 0 (Sim ou nao)\n");
    printf("As notificacoes estao ativadas?\nResposta: ");
    scanf("%d", &notoficacaoAtivada);

    printf("O modo silencioso esta ativo?\nResposta: ");
    scanf("%d", &modoSilencioso);

    if (notoficacaoAtivada == 1 && modoSilencioso == 0)
    {
        printf("Notificacao enviada");
    }
    else
    {
        printf("Notificacao nao enviada");
    }

    return 0;
}