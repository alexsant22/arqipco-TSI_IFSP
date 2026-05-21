/*
9.1. Escreva um programa que armazene os dados de um produto (descrição, preço e quantidade em
estoque) em uma struct. Após o cadastro, exiba os dados armazenados.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nomeProduto[50];
    char descricao[300];
    float preco;
    int quantidadeEstoque;
} Produto;

int main()
{
    Produto p;

    printf("Digite o nome do produto: ");
    fgets(p.nomeProduto, sizeof(p.nomeProduto), stdin);
    p.nomeProduto[strcspn(p.nomeProduto, "\n")] = '\0'; // Remove o Enter

    printf("\nDigite a descricao do produto (max 300 char): ");
    fgets(p.descricao, sizeof(p.descricao), stdin);
    p.descricao[strcspn(p.descricao, "\n")] = '\0'; // Remove o Enter

    printf("\nDigite o preco do produto (R$): ");
    scanf("%f", &p.preco);

    printf("\nDigite a quantidade em estoque desse produto (.unid): ");
    scanf("%d", &p.quantidadeEstoque);

    // Exibindo os resultados
    printf("\nNome do produto: %s", p.nomeProduto);
    printf("\nDescricao do produto: %s", p.descricao);
    printf("\nPreco do produto: R$%.2f", p.preco);
    printf("\nQuantidade em estoque do produto: %d", p.quantidadeEstoque);

    return 0;
}