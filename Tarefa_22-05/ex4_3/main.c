/*
4.3. Escreva um programa que implemente uma calculadora, contendo as operações de adição,
subtração, multiplicação e divisão (com tratamento para divisão por zero). O programa deve
utilizar funções declaradas por meio de protótipos e múltiplos arquivos. A função main() deve ser
responsável somente pela exibição do menu, leitura de dados do usuário e chamada das funções
apropriadas.
    Observação: Não devem ser utilizadas variáveis globais.
    Desafio: implemente porcentagem, potência, média entre dois valores e valor absoluto
*/

#include <stdio.h>
#include "operacoes.h"

int main()
{
    int escolha;
    float num1, num2, ress;

    // Criando menu
    printf("<=== MENU ===>\n");
    printf("Escolha uma das opcoes de calculo:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        // Pedindo valor 1
        printf("\nDigite o primeiro valor da soma: ");
        scanf("%f", &num1);

        // Pedindo valor 2
        printf("\nDigite o segundo valor da soma: ");
        scanf("%f", &num2);

        // Chamando função para calcular e salvando resultado
        ress = adicao(num1, num2);

        // Exibindo resultado
        printf("\nO resultado da soma foi: %.2f", ress);
        break;

    case 2:
        // Pedindo valor 1
        printf("\nDigite o primeiro valor da subtracao: ");
        scanf("%f", &num1);

        // Pedindo valor 2
        printf("\nDigite o segundo valor da subtracao: ");
        scanf("%f", &num2);

        // Chamando função para calcular e salvando resultado
        ress = subtracao(num1, num2);

        // Exibindo resultado
        printf("\nO resultado da subtracao foi: %.2f", ress);
        break;

    case 3:
        // Pedindo valor 1
        printf("\nDigite o primeiro valor da multiplicacao: ");
        scanf("%f", &num1);

        // Pedindo valor 2
        printf("\nDigite o segundo valor da multiplicacao: ");
        scanf("%f", &num2);

        // Chamando função para calcular e salvando resultado
        ress = multiplicacao(num1, num2);

        // Exibindo resultado
        printf("\nO resultado da multiplicacao foi: %.2f", ress);
        break;

    case 4:
        // Pedindo valor 1
        printf("\nDigite o primeiro valor da divisao: ");
        scanf("%f", &num1);

        // Pedindo valor 2
        printf("\nDigite o segundo valor da divisao: ");
        scanf("%f", &num2);

        // Verificação de divisão por 0
        if (num2 == 0)
        {
            printf("\nErro: Nao eh possivel divisao por 0.");
        }
        else
        {
            // Chamando função para calcular e salvando resultado
            ress = divisao(num1, num2);

            // Exibindo resultado
            printf("\nO resultado da divisao foi: %.2f", ress);
        }

        break;

    default:
        printf("\nErro: Opcao invalida.");
        break;
    }

    return 0;
}