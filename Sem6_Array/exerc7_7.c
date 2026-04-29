/*
7.7. Uma empresa possui 5 (cinco) setores. Escreva um programa que leia e armazene a emissão
mensal de CO₂ para cada setor, calcule e mostre:
- O setor mais poluente.
- A emissão total.
- Quais setores estão acima da média
*/

#include <stdio.h>
int main()
{
    float emissaoSetores[5];
    float emissaoTotal = 0;
    float maiorEmissao = 0;
    int setorMaisPoluente;
    float mediaEmissao;

    printf("Digite a emissao de CO₂ em 5 setores:\n");

    // Laço para ler as emissoes
    for (int i = 0; i < 5; i++)
    {
        // Pedindo valores
        printf("\nDigite a emissao do setor %d: ", i + 1);
        scanf("%f", &emissaoSetores[i]);

        // Somando as emissões
        emissaoTotal += emissaoSetores[i];

        // Verificando qual a maior emissão
        if (emissaoSetores[i] > maiorEmissao)
        {
            maiorEmissao = emissaoSetores[i];

            // Salvando o setor com amior emissão
            setorMaisPoluente = i + 1;
        }
    }

    // Calculando média de emissão
    mediaEmissao = emissaoTotal / 5.0; // Divisão por número real

    // Exibindo saídas prévias
    printf("\nO setor mais polutente: Setor %d", setorMaisPoluente);
    printf("\nEmissao total da empresa: %.2f de emissaso", emissaoTotal);
    printf("\nEmissao media: %.2f de emissao", mediaEmissao);

    // Exibindo setores com a emissão acima da média
    printf("\nSetores acima da media:\n");

    // Segundo laço para verificar setores com emissão acima da média
    for (int i = 0; i < 5; i++)
    {
        // Verificações para ver qual esta acima da média
        if (emissaoSetores[i] > mediaEmissao)
        {
            printf("\nSetor %d", i + 1);
        }
    }

    return 0;
}